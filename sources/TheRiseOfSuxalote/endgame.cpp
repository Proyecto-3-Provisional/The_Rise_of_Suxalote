#include <TheRiseOfSuxalote/endgame.h>

#include <EC/scene.h>
#include <EC/scene_manager.h>

#include <Lua/scene_loader.h>

#include <iostream>

namespace magma_game
{
	Endgame::Endgame() : Component(), victoryRoute(" "), loseRoute(" ")
	{
	}

	Endgame::~Endgame()
	{
	}

	bool Endgame::initComponent(std::map<std::string, std::string> args)
	{
		try {
			victoryRoute = args["winRoute"];
			loseRoute = args["lostRoute"];
		}
		catch (std::exception& e) {
			std::cout << "WARNING! - error en un componente endgame:\n\n     " << e.what() << "\n\n";

			return false;
		}
		return true;
	}

	bool Endgame::start()
	{
		return true;
	}

	void Endgame::update(float deltaTime)
	{
	}

	void Endgame::winOrLose(bool victory)
	{
		SceneMap* sncMp;

		std::string nextScene = victory ? victoryRoute : loseRoute;
		
		sncMp = Singleton<magma_engine::SceneLoader>::instance()->getMapFile(nextScene);

		magma_engine::Scene* scn = new magma_engine::Scene();

		bool sceneCreated = scn->loadScene(sncMp);

		if (sceneCreated)
			Singleton<magma_engine::SceneManager>::instance()->changeScene(scn);
		else
			delete scn;

	}
}
//#pragma once
//
//#include <EC/component.h>
//
//namespace magma_game
//{
//	class magma_engine::UI_Progress_Bar;
//
//	class Progress_Bar : public magma_engine::ec::Component
//	{
//	public:
//
//		//Metodo de declaraci�n del componente
//		Progress_Bar();
//		virtual ~Progress_Bar();
//
//		virtual bool initComponent(std::string overlayName, std::string name,
//			float width, float height, float x, float y, float pro, float proLimit);
//
//		virtual void render() {};
//
//		//Metodos para activaci�n o desactivaci�n del componente
//		virtual void onEnable();
//		virtual void onDisable();
//
//		//Metodo para obtener el nombre del componente
//		std::string GetName();
//
//		//Metodo para inicializar el componente
//		virtual bool start();
//
//		//Metodo para actualizar el componente
//		//En este caso, modificamos el tama�o de la imagen si ha habido
//		//cambios en el tama�o de la ventana
//		virtual void update(float deltaTime);
//
//		//Indicamos si puedes interactuar o no con el componente
//		void setInteractive(bool interactive);
//
//		//Metodos para modificar el valor del progreso actual y el limite
//		void setProgress(float pro); 
//		void setProgressLimit(float proLimit); 
//
//	private:
//
//		magma_engine::UI_Progress_Bar* progressBar;
//
//		//Nombre de la imagen
//		std::string imageName;
//		//Nombre de la textura
//		std::string normalName;
//
//		//Booleano de interaccion o no
//		bool interactive;
//
//		//Variable del progreso actual y el final 
//		float progress; 
//		float limit; 
//
//		//Variables de tama�o, posicion y tama�o de pantalla
//		float tamX;
//		float tamY;
//		float posX;
//		float posY;
//		float screenHeight;
//		float screenWidth;
//	};
//}
//

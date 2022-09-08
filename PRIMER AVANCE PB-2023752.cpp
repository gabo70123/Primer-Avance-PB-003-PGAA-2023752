#include <iostream>


using namespace std;

int main() {
	int i = 0, opcion, opt, pu, total, cant, o, u = 0;
	string videojuego, clasificacion, d, h;

menu:
	cout << "<<<<<< MENU DE OPCIONES GAME OVER >>>>>>>" << endl;
	cout << "Eliga una de las siguientes opciones: " << endl;   ///MENU///
	cout << "1) da de alta el videojuego" << endl;
	cout << "2) salir " << endl;
	cout << "3)limpia pantalla" << endl;

	cin >> opcion;


switch (opcion) {
case 1:

	while (i < 3) {

		i = i + 1;
		cout << "Agendar articulo " << endl;
		cout << endl;

		cout << "su número de articulo es: " << i << endl;
		2;
		cout << "ingrese año de lanzamiento" << endl;
		
		cout << "ingrese la clasificacion" << endl;
	
		cout << "ingrese la descripcion" << endl;

		cout << "Ingrese el genero del videojuego" << endl;


		pu = 200;
		cout << "El precio unitario es de: $" << pu << endl;
		cout << "Ingrese el precio del videojuego" << endl;
		cin >> cant;
		cout << " " << endl;
		cout << "Nombre del videojuego: " << videojuego << endl;                  ////INFORMACION//
		cout << "clasificacion: " << clasificacion << endl;
		cout << "Descripcción: " << d << endl;
		cout << "genero: " << h << endl;
		cout << "El precio total es de: $" << cant + pu << endl;

		cout << "Si desea agendar otro articulo ingrese 1, de lo contrario ingrese 0" << endl;
		cin >> o;
		if (o == 0) {
			goto menu;
		}
		system("cls");
	}
	if (i == 3)
	{
		cout << " ya no se pueden programar más articulos ";
		goto menu;
	}
	break;

case 2:
	system("pause");
	cout << "saliendo del menu adios " << endl;
	break;
}
}

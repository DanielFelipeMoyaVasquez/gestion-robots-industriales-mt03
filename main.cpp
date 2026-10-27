#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Mantener el bucle do while hasta que ejecutar sea false
    bool ejecutar = true;
    
    //Datos para la celda manufactura
    int idCelda;
    string nombreCelda;
    int capacidadMaxima = 1;
    
    //Arrays para guardar datos de los ROBOTS
    int codigo[capacidadMaxima]; 
    string nombre[capacidadMaxima];
    string tipo[capacidadMaxima];
    double gradosLibertad[capacidadMaxima];
    double velocidadMaxima[capacidadMaxima];
    int ciclosRealizado[capacidadMaxima];
    int ciclosMantenimiento[capacidadMaxima];
    string estado[capacidadMaxima];
    bool activo[capacidadMaxima] = {false};
    
    do{
        
        //Menu principal
        cout << "\n\n\033[1m== 1.MENU GESTIÓN DE ROBOTS MT03 ==\033[0m";
    
        cout << "\n\n1. RF1 Registrar la celda de manufactura";
        cout << "\n2. RF2 CRUD robots";
        cout << "\n3. RF3 Registrar mantenimientos";
        cout << "\n0.Salir";
        
        int opcion;
        
        cout << "\n\nSeleccione una opcion: ";
        cin >> opcion;
        cout << endl;
    
        
        switch(opcion){
            
            case 0:{
                
                //Cambia el valor de ejecutar para terminar el bucle while
                cout << "Saliendo...";
                ejecutar = false;
                break;
                
            }
            
            case 1: {
                
                //Celda manufactura
                cout << "\n== REGISTRAR CELDA MANUFACTURA ==\n";
            
                cout << "Id de la celda: ";
                cin >> idCelda;
        
                cout << "Nombre de la celda: ";
                cin.ignore();
                getline(cin, nombreCelda);
                
                
                cout << "Capacidad maxima de robots: ";
                cin >> capacidadMaxima;
            
                
            }break;

            case 2:{
                
                //CRUD robot
                int opcionRobot;
                //Submenu para crud de los robots
                do{
                    
                    cout << "\n\033[1m== 2.MENU REGISTRAR ROBOTS ==\033[0m";
                
                    cout << "\n\n1.Registrar robot";
                    cout << "\n2.Consultar robots";
                    cout << "\n3.Actualizar robot";
                    cout << "\n4.Eliminar robot";
                    cout << "\n0.Salir";
                    
                    cout << "\n\nSeleccione una opcion: ";
                    
                    cin >> opcionRobot;
                    cout << endl;
                    
                    
                    switch(opcionRobot){
                        
                        //Case 1: registrar robots
                        case 1:{
                        
                            cout << "\033[1mNota:\033[0m Si se agregan numeros negativos se le aplicara valor absoluto." << endl;
                            
                            for (int i = 0; i < capacidadMaxima; i ++){
                                
                                //CODIGO DEL ROBOT
                                cout << "\nCodigo del robot " << i+1 << ": ";
                                cin >> codigo[i];
                                //Valor absoluto por si el usuario ingresa un valor negativo convertirlo a positivo
                                codigo[i] = abs(codigo[i]);
                                
                                //NOMBRE DEL ROBOT
                                cout << "\nNombre del robot " << i+1 << ": ";
                                cin.ignore();
                                getline(cin, nombre[i]);
                                
                                //TIPO DEL ROBOT
                                cout << "\nTipo del robot " << i+1 << ": ";
                                
                                cout << "\n\n1.Soldadura";
                                cout << "\n2.Ensamble";
                                cout << "\n3.Pintura";
                                cout << "\n4.Paletizado";
                                
                                cout << "\n\nSeleccione una opcion: ";
                                
                                int tipoOpcion;
                                cin >> tipoOpcion;
                                
                                switch(tipoOpcion){
                                    
                                    case 1: 
                                        tipo[i] = "Soldadura"; 
                                        break;
                                        
                                    case 2: 
                                        tipo[i] = "Ensamble"; 
                                        break;
                                        
                                    case 3: 
                                        tipo[i] = "Pintura"; 
                                        break;
                                        
                                    case 4: 
                                        tipo[i] = "Paletizado"; 
                                        break;
                                        
                                    default:
                                        cout << "Escoge una de las 4 opciones.";
                                }
                                
                                
                                //GRADOS DE LIBERTAD DEL ROBOT
                                cout << "\nGrados de libertad del robot " << i+1 << ": ";
                                cin >> gradosLibertad[i];
                                //Valor absoluto por si el usuario ingresa un valor negativo convertirlo a positivo
                                gradosLibertad[i] = abs(gradosLibertad[i]);
                                
                                //VELOCIDAD MAXIMA DEL ROBOT
                                cout << "\nVelocidad maxima del robot " << i+1 << ": ";
                                cin >> velocidadMaxima[i];
                                //Valor absoluto por si el usuario ingresa un valor negativo convertirlo a positivo
                                velocidadMaxima[i] = abs(velocidadMaxima[i]);
                                
                                //CICLOS REALIZADOS DEL ROBOT
                                cout << "\nCiclos realizados del robot " << i+1 << ": ";
                                cin >> ciclosRealizado[i];
                                //Valor absoluto por si el usuario ingresa un valor negativo convertirlo a positivo
                                ciclosRealizado[i] = abs(ciclosRealizado[i]);
                                
                                //CICLOS DE MANTENIMENTO DEL ROBOT
                                cout << "\nCiclos de mantenimiento del robot " << i+1 << ": ";
                                cin >> ciclosMantenimiento[i];
                                //Valor absoluto por si el usuario ingresa un valor negativo convertirlo a positivo
                                ciclosMantenimiento[i] = abs(ciclosMantenimiento[i]);
                                
                                //ESTADO DEL ROBOT
                                cout << "\nEstado del robot " << i+1 << ": ";
                                
                                cout << "\n\n1.Operativo";
                                cout << "\n2.En mantenimiento";
                                cout << "\n3.En programación";
                                cout << "\n4.Fuera de servicio";
                                
                                cout << "\n\nSeleccione una opcion: ";
                                
                                int estadoOpcion;
                                cin >> estadoOpcion;
                                
                                switch(estadoOpcion){
                                    
                                    case 1: 
                                        estado[i] = "Operativo"; 
                                        break;
                                        
                                    case 2: 
                                        estado[i] = "En mantenimiento"; 
                                        break;
                                        
                                    case 3: 
                                        estado[i] = "En programación"; 
                                        break;
                                        
                                    case 4: 
                                        estado[i] = "Fuera de servicio"; 
                                        break;
                                        
                                    default:
                                        cout << "Escoge una de las 4 opciones.";
                                }
                                
                                //Confirmacion de que el robot existe
                                activo[i] = true;
                                
                            }
                        }break;
                        
                        //Case 2: consultar robots
                        case 2:{
                            
                            int menuConsultar;
                            
                            do{
                                
                                cout << "\n\033[1m== 3.MENU CONSULTAR ROBOTS ==\033[0m";
                
                                cout << "\n\n1.Consultar robot por codigo";
                                cout << "\n2.Consultar todo los robots";
                                cout << "\n0.Salir";
                                
                                cout << "\n\nSeleccione una opcion: ";
                                
                                cin >> menuConsultar;
                                cout << endl;
                                
                                switch(menuConsultar){
                                    
                                    //Consultar por codigo
                                    case 1:{
                                        int consultarCodigo;
                                        
                                        bool encontrado = false;
                                        
                                        cout << "Escriba el codigo del robot que desea consultar: ";
                                        cin >> consultarCodigo;
                                        
                                        cout << endl;
                                        
                                        for (int i = 0; i < capacidadMaxima; i++){
                                            
                                            if(codigo[i] == consultarCodigo && activo[i] == true){
                                                
                                                encontrado = true;
                                                
                                                cout << "-------------------------------------------------------------" << endl;
                                                cout << "Codigo: " << codigo[i] << endl;
                                                cout << "Nombre: " << nombre[i] << endl;
                                                cout << "Tipo: " << tipo[i] << endl;
                                                cout << "Grados de libertad: " << gradosLibertad[i] << endl;
                                                cout << "Velocidad maxima: " << velocidadMaxima[i] << endl;
                                                cout << "Ciclos realizados: " << ciclosRealizado[i] << endl;
                                                cout << "Ciclos de mantenimiento: " << ciclosMantenimiento[i] << endl;
                                                cout << "Estado: " << estado[i] << endl;
                                                
                                                break;
                                            }
                                            
                                        }
                                        
                                        if(encontrado == false){
                                            
                                            cout << "No se pudo encontrar el robot, verifica que el codigo este correcto." << endl;
                                            
                                        }
                                        
                                    }break;
                                    
                                    //Consultar todos los robots
                                    case 2:{
                                        for (int i = 0; i < capacidadMaxima; i++){
                                            
                                            if (activo[i] == true){
                                                
                                                cout << "-------------------------------------------------------------" << endl;
                                                cout << "Codigo: " << codigo[i] << endl;
                                                cout << "Nombre: " << nombre[i] << endl;
                                                cout << "Tipo: " << tipo[i] << endl;
                                                cout << "Grados de libertad: " << gradosLibertad[i] << endl;
                                                cout << "Velocidad maxima: " << velocidadMaxima[i] << endl;
                                                cout << "Ciclos realizados: " << ciclosRealizado[i] << endl;
                                                cout << "Ciclos de mantenimiento: " << ciclosMantenimiento[i] << endl;
                                                cout << "Estado: " << estado[i] << endl << endl;
                                                
                                            }
                                            
                                        }
                                    }break;
                                }
                                
                            }while(menuConsultar != 0);
                            
                        }break;    
                        
                        //Case 3: Actualizar datos del robot
                        case 3:{
                            
                            int actualizarCodigo;
                            
                            bool encontrado = false;
                        
                            cout << "Escriba el codigo del robot que desea actualizar: ";
                            cin >> actualizarCodigo;
                            
                            cout << endl;
                            
                            for (int i = 0; i < capacidadMaxima; i++){
                                            
                                if(codigo[i] == actualizarCodigo && activo[i] == true){
                                    
                                    int menuActualizar;
                                    
                                    encontrado = true;
                                    
                                    do{
                                        
                                        cout << "\n\033[1m== 4.MENU ACTUALIZAR ROBOTS ==\033[0m";
                
                                        cout << "\n\n1.Actualizar Codigo";
                                        cout << "\n2.Actualizar Nombre";
                                        cout << "\n3.Actualizar Tipo";
                                        cout << "\n4.Actualizar Grados de libertad";
                                        cout << "\n5.Actualizar Velocidad maxima";
                                        cout << "\n6.Actualizar Ciclos realizados";
                                        cout << "\n7.Actualizar Ciclos de mantenimiento";
                                        cout << "\n8.Estado";
                                        cout << "\n0.Salir";
                                        
                                        cout << "\n\nSeleccione una opcion: ";
                                        
                                        cin >> menuActualizar;
                                        cout << endl;
                                        
                                        cout << "\033[1mNota:\033[0m Si se agregan numeros negativos se le aplicara valor absoluto." << endl;
                                        
                                        switch(menuActualizar){
                                            
                                            case 1:{
                                                
                                                cout << "\nNuevo codigo: ";
                                                cin >> codigo[i];
                                                codigo[i] = abs(codigo[i]);
                                                
                                                cout << "\nCodigo actualizado correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 2:{
                                                
                                                cout << "\nNuevo nombre: ";
                                                cin.ignore();
                                                getline(cin, nombre[i]);
                                                
                                                cout << "\nNombre actualizado correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 3:{
                                                
                                                cout << "\nNuevo tipo: ";
                                                
                                                cout << "\n\n1.Soldadura";
                                                cout << "\n2.Ensamble";
                                                cout << "\n3.Pintura";
                                                cout << "\n4.Paletizado";
                                                
                                                cout << "\n\nSeleccione una opcion: ";
                                                
                                                int tipoOpcion;
                                                cin >> tipoOpcion;
                                                
                                                switch(tipoOpcion){
                                                    
                                                    case 1: 
                                                        tipo[i] = "Soldadura"; 
                                                        break;
                                                        
                                                    case 2: 
                                                        tipo[i] = "Ensamble"; 
                                                        break;
                                                        
                                                    case 3: 
                                                        tipo[i] = "Pintura"; 
                                                        break;
                                                        
                                                    case 4: 
                                                        tipo[i] = "Paletizado"; 
                                                        break;
                                                        
                                                    default:
                                                        cout << "Escoge una de las 4 opciones.";
                                                }
                                                
                                                cout << "\nTipo actualizado correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 4:{
                                                
                                                cout << "\nNuevo grado de libertad: ";
                                                cin >>gradosLibertad[i];
                                                gradosLibertad[i] = abs(gradosLibertad[i]);
                                                
                                                cout << "\nGrados de libertad actualizados correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 5:{
                                                
                                                cout << "\nNueva velocidad maxima: ";
                                                cin >> velocidadMaxima[i];
                                                
                                                velocidadMaxima[i] = abs(velocidadMaxima[i]);
                                                
                                                cout << "\nVelocidad maxima actualizada correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 6:{
                                                
                                                cout << "\nNuevos ciclos realizados: ";
                                                cin >> ciclosRealizado[i];
                                                ciclosRealizado[i] = abs(ciclosRealizado[i]);
                                                
                                                cout << "\nCiclos realizados actualizados correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 7:{
                                                
                                                cout << "\nNuevos ciclos de mantenimento: ";
                                                cin >> ciclosMantenimiento[i];
                                                ciclosMantenimiento[i] = abs(ciclosMantenimiento[i]);
                                                
                                                cout << "\nCiclos de mantenimiento actualizados correctamente.!" << endl;
                                                
                                            }break;
                                            
                                            case 8:{
                                                
                                                cout << "\nNuevo estado del robot: ";
                                
                                                cout << "\n\n1.Operativo";
                                                cout << "\n2.En mantenimiento";
                                                cout << "\n3.En programación";
                                                cout << "\n4.Fuera de servicio";
                                                
                                                cout << "\n\nSeleccione una opcion: ";
                                                
                                                int estadoOpcion;
                                                cin >> estadoOpcion;
                                                
                                                switch(estadoOpcion){
                                                    
                                                    case 1: 
                                                        estado[i] = "Operativo"; 
                                                        break;
                                                        
                                                    case 2: 
                                                        estado[i] = "En mantenimiento"; 
                                                        break;
                                                        
                                                    case 3: 
                                                        estado[i] = "En programación"; 
                                                        break;
                                                        
                                                    case 4: 
                                                        estado[i] = "Fuera de servicio"; 
                                                        break;
                                                        
                                                    default:
                                                        cout << "Escoge una de las 4 opciones.";
                                                }
                                                
                                            }break;
                                            
                                            default:{
                                                
                                                cout << "\nOpcion invalida.";
                                                
                                            }
                                        }
                                        
                                    }while(menuActualizar != 0);
                                    
                                    
                                }
                                
                            }
                            
                            if(encontrado == false){
                                
                                cout << "No se pudo encontrar el robot, verifica que el codigo este correcto." << endl;
                                
                            }
                                
                            
                            
                            
                        }break;
                        
                        
                        case 4:{
                            
                            int eliminarCodigo;
                            bool encontrado = false;
                            
                            cout << "Escribe el codigo del robot que deseas elminar: ";
                            cin >> eliminarCodigo;
                            
                            for(int i = 0; i < capacidadMaxima; i++){
                                
                                if (codigo[i] == eliminarCodigo && activo[i] == true){
                                    
                                    encontrado = true;
                                    int confirmacion;
                                    
                                    do{
                                        
                                        cout << "\nEstas seguro que quieres eliminar el robot con el codigo " << codigo[i] << "?";
                                        cout << "\n\n1.SI";
                                        cout << "\n2.NO";
                                        cout << "\n\nEscriba su opcion: ";
                                        
                                        cin >> confirmacion;
                                        
                                        switch(confirmacion){
                                            
                                            case 1:{
                                                
                                                activo[i] = false;
                                                cout << "Se ha eliminado correctamente.";
                                                
                                            }break;
                                            
                                            case 2:{
                                                
                                                cout << "Se ha cancelado la eliminacion del robot con codigo " << codigo[i] << ".";
                                                
                                            }break;
                                            
                                            default:{
                                                
                                                cout << "opcion invalida.";
                                                
                                            }
                                            
                                        }
                                        
                                        if(confirmacion == 1 || confirmacion == 2){
                                            
                                            break;
                                            
                                        }
                                    }while(true);
                                break;    
                                }
                                
                            }
                            
                            
                        }break;
                        
                        default:{
                            
                            cout << "Opcion invalida.\n";
                            
                        }
                    }
                    
                }while(opcionRobot != 0);
                
            }break;

            case 3: {
                
                cout << "Registrar mantenimiento.";
                
            }break;

            
            default:{
                
                cout << "Opcion invalida.";
                
            }
            
        }
        
        
    }while(ejecutar);
    

    return 0;
}

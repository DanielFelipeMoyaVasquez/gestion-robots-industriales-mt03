#include <iostream>
using namespace std;

void menu(){
    
    cout << "\n\n== MENU ==";
    
    cout << "\n\nGESTIÓN DE ROBOTS";
    cout << "\n1.Registrar robot";
    cout << "\n2.Consultar robots";
    cout << "\n3.Actualizar robot";
    cout << "\n4.Eliminar robot";
    
    cout << "\n\nOTRAS FUNCIONALIDADES";
    cout << "\n5.Gestion de mantenimiento";
    cout << "\n6.Consultar celda manofactura";
    cout << "\n7.Estadisticas de robots";
    
    cout << "\n0.Salir";
    
}

int main()
{
    
    bool ejecutar = true;
    
    do{
        
        menu();
        
        int opcion;
        
        cout << "\n\nOpcion: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
            
            case 0:{
                
                cout << "Saliendo...";
                ejecutar = false;
                break;
                
            }
            
            case 1:
            
                cout << "Registrar robot";
                break;

            case 2:
            
                cout << "Consultar robots";
                break;

            case 3:
            
                cout << "Actualizar robot";
                break;

            case 4:
            
                cout << "Eliminar robot";
                break;

            case 5:
            
                cout << "Gestion de mantenimiento";
                break;

            case 6:
            
                cout << "Consultar celda de manufactura";
                break;

            case 7:
            
                cout << "Estadisticas de robots";
                break;

            
            default:{
                
                cout << "Opcion invalida.";
                
            }
            
        }
        
        
    }while(ejecutar);
    

    return 0;
}
#include <iostream>
#include <iomanip>


int main(){
    /*
    int nv[4];
    int pr;
    for (int i=0;i<4;i++){
        cout << "Digito: "; cin >> nv[i];
    }
    
    for (int x=0;x<5;x++){
        if(nv[x]>nv[x+1]){
            pr = nv[x+1];
            nv[x+1] = nv[x];
            nv[x] = pr; 
        }
        else if(nv[x]<nv[x+1]){
            pr = nv[x];
            nv[x] = nv[x+1];
            nv[x+1] = pr;
        }
       cout << "Numero: " << nv[x] << endl;
    }*/
   /* int a,*aux; // *aux saber la posicion
    cout<< "Digito: "; cin >> a;
    aux = &a; // Saver la Posicion
    if(*aux%2==0){
        cout << "Numero: " << *aux << " par" << endl;
        cout << "Posicion: "<< aux << endl;
    }
    else{
        cout << "Numero: "<< *aux << " inpar" << endl;
        cout << "Posicion: "<< aux << endl;
    }
*/

    float a;
    a = 13.131313;
    std::cout << "Digito: " << a << '\n';
    std::cout << std::setprecision(4) << a << '\n';
    std::cout << "Digito: " << &a << '\n';

    return 0;
}


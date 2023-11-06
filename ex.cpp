#include<iostream>
#include<vector>

using namespace std;


Class stack{

    public:
           stack(int taille=20){
           stack.reserve(taille);
          }
stack& operator<<(int a){// Opérateur << pour ajouter un entier à la pile
         if(est pleine()){
                cout<<"la pile est pleine, vous ne pivez pas ajouter"<< a <<endl;
         }
         else{stack.push_back(a)}
         return *this;
}          
stack& operator>>(int& a){// Opérateur >> pour retirer le sommet de la pile et stocker sa valeur dans a
    if(!estpleine()){
        cout<<"la pile est vide"<<endl;
    }
    else{
        n=stack.back();
        stack.pop_back;
    }
    return *this;
}
int operator++(){
    if(estpleine)
    p++ =1;
    else 
    p++=0;
}
int operator--(){
    if(!estpleine)
    p-- =1;
    else
    p-- =0;
}
   private:
    vector<int> stack;

    bool estpleine() const {
        return stack.taille() == stack.capacity();
    }

    bool estvide() const {
        return stack.empty();
    }

};
main(){
    stack p;
    p<<10<<20<<30;
    int n1,n2,n3;
    p << n1 << n2 << n3 ;
    p >> n1 >> n2 << n3 ;
    cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << endl;
    int estpleine = p++;
    int estvide =p--;
    if (estpleine==1){
        cout<<"la pile est pleine"<<endl;
    }
    else{ cout<<"la pile n'est pas pleine"<<endl;}
    if(estvide==1){
        cout<<"la pile est vide"<<endl;
    }
     else{ cout<<"la pile n'est pas vide"<<endl;}
     return 0;


}
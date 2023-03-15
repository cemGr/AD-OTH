#include <iostream>
#define SIZE 10;
void bubbleshort(int (&arr)[10]);
void InsertionShort(int (&arr)[10]);

int main(){
    int liste[10]={4,2,1,8,5,4,3,1,7,9};
    int liste_b[10]={4,2,1,8,5,4,3,1,7,9};
    //Ausgabe ungeordnet
    std::cout<<"ungeornet"<<std::endl;
    for(int i=0;i<10;i++){
        std::cout<<liste[i]<<std::endl;
    }

    bubbleshort(liste);
    std::cout<<"geordnet"<<std::endl;
      for(int i=0;i<10;i++){
        std::cout<<liste[i]<<std::endl;
    }

    InsertionShort(liste_b);
    std::cout<<"geordnet"<<std::endl;
      for(int i=0;i<10;i++){
        std::cout<<liste_b[i]<<std::endl;
      }
    std::cout<<"test"<<std::endl;
    std::cout<<"hahaha"<<std::endl;
    return 0;
}

void bubbleshort(int (&arr)[10]){
    int counter=0;
    for(int i=1;i<10;i++){
        for(int j=9;j>=i;j--){
            if(arr[j]>arr[j-1]){
                //swapp
                counter++;
                int a=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=a;
            }
        }
    }
    std::cout<<counter<<std::endl;
}

void InsertionShort(int (&arr)[10]){
    int counter=0;
    for(int i=1;i<10;i++){
        for(int j=i;j>0 &&arr[j]>arr[j-1];j--){
            counter++;
                //swapp
                int a=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=a;
        }
    }
    std::cout<<counter<<std::endl;
}
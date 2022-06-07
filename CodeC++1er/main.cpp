#include <iostream>
#include <String>
#include <math.h>
 using namespace std;

 int main(){//fontion d entrer du code @ZEBS code
     cout<<"======================BIENVENUE DANS LE PROGRAMME DE NGUENA ZEBS ISJ LICENCE 1============\n\n\n";

        cout<<"entrer le nombre de valeur que vas contenir le tableau: "; // ici, l utilisateur doit entrer le nbre de valeur du tableau @ZEBS CODE ISJ
        int nbreval;
        cin>>nbreval;
         // cette boucle lui permettra d etre oubliger d etre une valeur >=0 @ZEBS CODE
            while(nbreval==0){
                cout<<"vous n avez aucune valeur. \n entrer une fois de plus le nombre de valeur de votre tableau: ";
            cin>>nbreval;
            }


             while (nbreval<0){
            cout<<"......oupppssss vous avez entrer une valeur negative! \n";
            cout<<"entrer encore le nombre de valeur positif que vas contenir votre tableau: ";
            cin>>nbreval;
        }//fin de la boucle obligatoire @ZEBS code


//+++++++++++++++++++++++++++++++++++++++++L UTILISATEUR ENTRERA CHAQUE VALEUR DU TABLEAU @ZEBS CODE ISJ+++++++++++++++++++++++++++++++++++++++++
        int i{0}; int tab[nbreval]; int somme{0};
            for(i=0; i<nbreval; i++){
            cout<<"entrer la valeur "<<i+1<<" du tableau: ";
            cin>>tab[i];
            }
            cout<<"\n";
            cout<<"vos valeurs entrees sont donc:   ";// ICI LE PROGRAMME AFFICHE LES VALEUR SAISIE PAR LUTILISATEUR @ZEBS CODE ISJ
             for(i=0; i<nbreval; i++){
            cout<<"| "<<tab[i]<<" |";
            }
//++++++++++++++++++++++++++++++++++++++++++++++++++++++FIN ENTRER @ZEBS CODE+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

            cout<<"\n\n";


  //++++++++++++++++++++++++++++++++++++++++CALCULE DE LA MOYENNE ET MOYENNE @ZEBS CODE++++++++++++++++++++++++++++++++++++++++++++++++
             for(i=0; i<nbreval; i++){
                somme=somme+tab[i];
            }
            cout<<"======Ainsi, la somme des valeurs du tableau est \n \t\t S==";
            for(i=0; i<nbreval; i++){
                cout<<tab[i]<<" + ";
            }
            cout<<"° = "<<somme<<"\n\n";
            cout<<"======La moyenne du tableau ci-dessus est \n \t\t M== (";
            for(i=0; i<nbreval; i++){
                cout<<tab[i]<<" + ";
            }
            float Moyenne;
            Moyenne=(float)somme/nbreval;
            cout<<"°)/"<<nbreval<<" = " <<Moyenne<<"\n\n";
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++FIN CALCUL SOM ET MOY @ZEBS CODE++++++++++++++++++++++++++++++++++++++++++++++



//+++++++++++++++++++++++++++++++++++++++++++++++++++++MIN ET MAX DU TABLEAU @ZEBS CODE+++++++++++++++++++++++++++++++++++++++++++++++++
            int min{tab[0]}; int max{tab[0]};
            for(i=1; i<nbreval; i++){
                if(tab[i]<min){
                    min=tab[i];
                }
            }
             for(i=1; i<nbreval; i++){
                if(tab[i]>max){
                    max=tab[i];
                }
            }
            cout<<"======la plus petite valeur du tableau est: "<<min<<"\n\n";
            cout<<"======la plus grande valeur du tableau est: "<<max<<"\n\n\n\n";

//++++++++++++++++++++++++++++++++++++++++++++++++++FIN MIN ET MAX @ZEBS CODE ISJ++++++++++++++++++++++++++++++++++++++++++++++++++++++++





            cout<<"=============================CALCULE DE LA VARIANTE 'V'   ET DE L ECART TYPE '6'===================================  \n\n";

            cout<<"======La variante par rapport a vos valeur du tableau donne \n \t\t V==(";
            float xi{0}; float so{0};
            for(i=0; i<nbreval;i++){
                xi=xi+(tab[i]-Moyenne)*(tab[i]-Moyenne);
                cout<<"("<<tab[i]<<"-"<<Moyenne<<")^2+";
            }
            float v=(float)xi/nbreval;
            cout<<"°)/"<<nbreval<<"= "<<v<<"\n\n";

            float ecart;
            ecart= sqrt(v);
            cout<<"======Nous deduisons donc que l ecart type 6 est \n\t\t 6==(v)^0.5== "<<ecart<<"\n\n"<<endl;
            cout<<" merci dutiliser le programme de @ZEBS CODE ISJ"<<endl;


//+++++++++++++++++++++++++++++++++++++++++FIN DU PROGRAMME @ZEBS CODE ISJ+++++++++++++++++++++++++++++++++

        return 0;
 }

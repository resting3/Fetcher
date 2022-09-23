#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <cstddef>

#define R

using namespace std;



void leggi(string utente){
    cout << "Una produzione di Resting" << endl;
    cout << "Il bot sta cercando..." << endl;
    
    while (true){
        char * user = getenv("username");
        string contenitore;
        string stringapass;
        vector<string> vettore = {};
        ifstream file; //ifstream quando bisogna leggere
        string adress = "C:/Users/" + string(user) + "/Appdata/Roaming/.minecraft/logs/";
        file.open(adress + "latest.log");
        if (file.is_open(), ios::in){

        string   a;
        //  file >> stringapass;
        // cout << stringapass;
        // il ciclo for while è migliore per la lettura di un intero file il ciclo for è abbastanza obsoleto per questa operazione.
            while(getline(file, contenitore)){ //read data from file object and put it into string.

                if (contenitore.find(utente) != std::string::npos) {
                    ofstream filew;
                    filew.open("Risultato.txt", ios_base::app);
                    filew << "\n" << contenitore;
                    cout << "\nIl bot ha trovato qualcosa!";
                    filew.close();
                    ofstream filewe;
                    filewe.open(adress + "latest.log",ios::out);
                    filewe << "\n" << " ";
                    filewe.close();


                }
            }






            // vettore.push_back(contenitore); //aggiungere il contenitore nel vettore tipo stringa




            }








        //for (vector<string>::iterator it = vettore.begin(); it != vettore.end(); it++){ //Questo è un bel bordello per poter fare campionamento di una singola stringa bisogna dichiarare un vettore far passare il contenitore dove i dati andranno nel vettore poi il vettore viene impiegato inun singolo for di controllo in cui  vi è il pointer iterator che permette la lettura
            //   cout << *it << ' ';
            // cout << endl;
                //if (*it == "c"){
                //    cout << *it;
                //}









        }
}






//void scrivi(string dato){
  //  ofstream file; // ofstream quando bisogna scrivere
   // file.open ("Dati.txt");
   // file << dato;
   // cout << "Hai scritto nel file:" << dato;
   // file.close();

//}




int main()
{
    while (true){
        string input;
        string fetched;
        cout << "Inserire nome di prefisso: ";
        cin >> fetched;
        cout << "Parola chiave inserita: " << fetched << endl;
        leggi(fetched);


    }


    return 0;
}

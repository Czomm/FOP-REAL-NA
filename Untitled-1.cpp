#include <iostream> 
#include <string>
#include <limits>
using namespace std;

int main () {
    string greeting = "Welcome to The Geographical Information System of the Philippines!";
    string choose; 
    char decision1, decision2;

    do {
        cout << greeting << endl;
        cout << "Would you like to find out about a Region, a Province, or a City? ";
        getline (cin, choose);

        if (choose == "Region"){
        char info;
        int region;
        bool validation = false;

        while (!validation){
        cout << "Here are all the regions in the Philippines: " << endl;
        cout << "1. Region I - Ilocos Region" << endl;
        cout << "2. Region II - Cagayan Valley" << endl;
        cout << "3. Region III - Central Valley" << endl;
        cout << "4. Region IV-A - CALABARZON" << endl;
        cout << "5. MIMAROPA Region" << endl;
        cout << "6. Region V - Bicol Region" << endl;
        cout << "7. Region VI - Western Visayas" << endl;
        cout << "8. Region VII - Central Visayas" << endl;
        cout << "9. Region VIII - Eastern Visayas" << endl;
        cout << "10. Region IX - Zamboanga Peninsula" << endl;
        cout << "11. Region X - Northern Mindanao" << endl;
        cout << "12. Region XI - Davao Region" << endl;
        cout << "13. Region XII - SOCCSKSARGEN" << endl;
        cout << "14. Region XIII - Caraga" << endl;
        cout << "14. NCR - National Capital Region" << endl;
        cout << "15. CAR - Cordillera Administrative Region" << endl;
        cout << "16. BARMM - Bangsamoro Autonomous Region in Muslim" << endl;
        cout << "Select a number corresponding to a region to view more details about it: ";
        cin >> region;
        
            do{
            switch(region){//REGION
            
            case 1: {//CASE1
            char prov;
            char cmb; 
            cout << "REGION I - Ilocos Region" << endl;
            cout << "The Ilocos Region is located in the northwestern section of Luzon." << endl;
            cout << "It has 4 provinces, 9 cities, 116 municipalities, and 3,267 barangays." << endl;
            cout << "Its area is 129.65 per kilometer squared." << endl;
            cout << "It has a total population of 5,301,139 as of 2020." << endl;
            cout << "Would you like to find about the different provinces in Ilocos Region? (Y/N): ";
            cin >> prov;
            
                if (prov == 'Y' || prov == 'y'){
                int ilocos;
                cout << "Here are the provinces in Ilocos Region: " << endl;
                cout << "1. Ilocos Norte" << endl;
                cout << "2. Ilocos Sur" << endl;
                cout << "3. La Union" << endl;
                cout << "4. Pangasinan" << endl;
                cout << "Choose from 1-4 to find out to choose if you want to find out more about the different provinces in Ilocos Region: ";
                cin >> ilocos;
                    if (ilocos == 1){
                        cout << "You have chosen Ilocos Norte." << endl;
                        cout << "Ilocos Norte has a total population of 609,588 as of 2020.\n";
                        cout << "It's area is 3,418.75 in kilometer squared." << endl;
                        cout << "Has 2 Cities, 21 Municipalities, and 599 Barangays." << endl;
                        cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                        cin >> cmb;
                        
                            if (cmb == 'C' || cmb == 'c'){//IFCITIES
                            cout << "Here are all the Cities in Ilocos Region: " << endl;
                            cout << "1. Laoag - Capital City in Ilocos Norte" << endl;
                            cout << "2. Batac - Component City" << endl;
                            }
                            else if (cmb == 'M' || cmb == 'M'){//IFMUNICIPALITIES
                            cout << "Here are all the Municipalities in Ilocos Norte: " << endl;
                            cout << "1. Adams" << endl;
                            cout << "2. Bacarra" << endl;
                            cout << "3. Badoc" << endl;
                            cout << "4. Bangui" << endl;
                            cout << "5. Banna" << endl;
                            cout << "6. Burgos" << endl;
                            cout << "7. Carasi" << endl;
                            cout << "8. Currimao" << endl;
                            cout << "9. Dingras" << endl;
                            cout << "10. Dumalneg" << endl;
                            cout << "11. Marcos" << endl;
                            cout << "12. Nueva Era" << endl;
                            cout << "13. Pagudpud" << endl;
                            cout << "14. Paoay" << endl;
                            cout << "15. Pasuquin" << endl;
                            cout << "16. Piddig" << endl;
                            cout << "17. Pinili" << endl;
                            cout << "18. San Nicolas" << endl;
                            cout << "19. Sarrat" << endl;
                            cout << "20. Solsona" << endl;
                            cout << "21. Vintar" << endl;
                            }//IFMUNICIPALITIES
                            
                    }
                    else if (ilocos == 2){
                        cout << "You have chosen Ilocos Sur." << endl;
                        cout << "Ilocos Sur has a total population of 706,009 as of 2020" << endl;
                        cout << "Its area is 2,596.00 in kilometer squared." << endl;
                        cout << "Has 2 cities, 32 municipalities, and 768 barangays." << endl;
                        cout << "Would you like to find out about the cities or municipalities? Choose from C, M or N to find out about other regions: ";
                        cin >> cmb;

                         if (cmb == 'C' || cmb == 'c') {//IFCITIES
                        cout << "Here are all the Cities in Ilocos Sur: " << endl;
                        cout << "1. Vigan - Capital City in Ilocos Sur" << endl;
                        cout << "2. Candon - Component City" << endl;
                        } //IFCITIES

                        else if (cmb == 'M' || cmb == 'm'){ //IFMUNICIPALITIES
                        cout << "Here are all the Municipalities in Ilocos Sur: " << endl;
                        cout << "1. Alilem" << endl;
                        cout << "2. Banayoyo" << endl;
                        cout << "3. Bantay" << endl;
                        cout << "4. Burgos" << endl;
                        cout << "5. Cabugao" << endl;
                        cout << "6. Caoayan" << endl;
                        cout << "7. Cervantes" << endl;
                        cout << "8. Galimuyod" << endl;
                        cout << "9. Gregorio del Pilar" << endl;
                        cout << "10. Lidlidda" << endl;
                        cout << "11. Magsingal" << endl;
                        cout << "12. Nagbukel" << endl;
                        cout << "13. Narvacan" << endl;
                        cout << "14. Quirino" << endl;
                        cout << "15. Salcedo" << endl;
                        cout << "16. San Emilio" << endl;
                        cout << "17. San Ildefonso" << endl;
                        cout << "18. San Juan" << endl;
                        cout << "19. San Vicente" << endl;
                        cout << "20. Santa" << endl;
                        cout << "21. Santa Catalina" << endl;
                        cout << "22. Santa Cruz" << endl;
                        cout << "23. Santa Lucia" << endl;
                        cout << "24. Santa Maria" << endl;
                        cout << "25. Santiago" << endl;
                        cout << "26. Santo Domingo" << endl;
                        cout << "27. Sigay" << endl;
                        cout << "28. Sinait" << endl;
                        cout << "29. Sugpon" << endl;
                        cout << "30. Suyo" << endl;
                        cout << "31. Tagudin" << endl;
                        }//IFMUNICIPALITIES
                        
                    }
                    else if (ilocos == 3){
                        cout << "You have chosen La Union." << endl;
                        cout << "La Union has a total population of 822,352 as of 2020." << endl;
                        cout << "Its area is 1,499.28 in kilometer squared." << endl;
                        cout << "Has 1 City, 19 municipalities, and 576 barangays." << endl;
                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                            if (cmb == 'C' || cmb == 'c') {
                            cout << "Here are all the Cities in La Union: " << endl;
                            cout << "1. San Fernando - Capital City and the Regional Center";
                            }

                            else if (cmb == 'M' || cmb == 'm'){
                            cout << "1. Agoo\n";
                            cout << "2. Aringay\n";
                            cout << "3. Bacnotan\n";
                            cout << "4. Bagulin\n";
                            cout << "5. Balaoan\n";
                            cout << "6. Bangar\n";
                            cout << "7. Bauang\n";
                            cout << "8. Burgos\n";
                            cout << "9. Caba\n";
                            cout << "10. Luna\n";
                            cout << "11. Naguilian\n";
                            cout << "12. Pugo\n";
                            cout << "13. Rosario\n";
                            cout << "14. San Gabriel\n";
                            cout << "15. San Juan\n";
                            cout << "16. Santo Tomas\n";
                            cout << "17. Santol\n";
                            cout << "18. Sudipen\n";
                            cout << "19. Tubao\n";
                            
                            }

                            else if (cmb == 'B' || cmb == 'b'){

                            }
                    }
                    else if (ilocos == 4){
                        cout << "You have chosen Pangasinan." << endl;
                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                            if (cmb == 'C' || cmb == 'c') {
                            cout << "Here are all the Cities in Pangasinan: " << endl;
                            cout << "1. Alaminos\n";
                            cout << "2. Dagupan\n";
                            cout << "3. San Carlos\n";
                            cout << "4. Urdaneta\n";
                            }

                            else if (cmb == 'M' || cmb == 'm'){
                            cout << "Here are all the municipalities in Pangasinan: " << endl;
                            cout << "1. Agno\n";
                            cout << "2. Aguilar\n";
                            cout << "3. Alcala\n";
                            cout << "4. Anda\n";
                            cout << "5. Asingan\n";
                            cout << "6. Balungao\n";
                            cout << "7. Bani\n";
                            cout << "8. Basista\n";
                            cout << "9. Bautista\n";
                            cout << "10. Bayambang\n";
                            cout << "11. Binalonan\n";
                            cout << "12. Binmaley\n";
                            cout << "13. Bolinao\n";
                            cout << "14. Bugallon\n";
                            cout << "15. Burgos\n";
                            cout << "16. Calasiao\n";
                            cout << "17. Dasol\n";
                            cout << "18. Infanta\n";
                            cout << "19. Labrador\n";
                            cout << "20. Laoac\n";
                            cout << "21. Lingayan - Capital\n";
                            cout << "22. Mabini\n";
                            cout << "23. Malasiqui\n";
                            cout << "24. Manaoag\n";
                            cout << "25. Mangaldan\n";
                            cout << "26. Mangatarem\n";
                            cout << "27. Mapandan\n";
                            cout << "28. Natividad\n";
                            cout << "29. Pozorrubio\n";
                            cout << "30. Rosales\n";
                            cout << "31. San Fabian\n";
                            cout << "32. San Jacinto\n";
                            cout << "33. San Manuel\n";
                            cout << "34. San Nicolas\n";
                            cout << "35. San Quintin\n";
                            cout << "36. Santa Barbara\n";
                            cout << "37. Santa Maria\n";
                            cout << "38. Santo Tomas\n";
                            cout << "39. Sison\n";
                            cout << "40. Sual\n";
                            cout << "41. Tayug\n";
                            cout << "42. Umingan\n";
                            cout << "43. Urbiztondo\n";
                            cout << "44. Villasis\n";

                            }
                            
                    }
                    
                    }

            break; //CASE1

            }//CASE1

            case 2: { //CASE2
            char prov;
            char cmb;
            cout << "REGION II - Cagayan Valley";
            cout << "Cagayan Valley is located in Luzon" << endl;
            cout << "It has a total population of 3,685,744 people as of 2020." << endl;
            cout << "Its area is 298.37 in kilometer squared." << endl;
            cout << "It has 5 provinces, 4 cities, 89 municipalities, and 2,311 barangays." << endl;
            cout << "Would you like to find out about the different provinces in Cagayan Valley? (Y/N): ";
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int cagayan;
                cout << "Here are the provinces in Cagayan Valley: " << endl;
                cout << "1. Batanes" << endl;
                cout << "2. Cagayan" << endl;
                cout << "3. Isabela" << endl;
                cout << "4. Nueva Viscaya" << endl;
                cout << "Choose from 1-4 to find out to choose if you want to find out more about the different provinces: ";
                cin >> cagayan;

                    if (cagayan == 1){
                        cout << "You have chosen Batanes." << endl;

                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                            if(cmb == 'C' || cmb == 'c'){
                            cout << "Batanes is mostly composed of Municipalities and therefore has no cities\n";

                            }

                            else if(cmb == 'M' || cmb == 'm'){
                            cout << "Here are all the municipalities in Batanes: " << endl;
                            cout << "1. Basco - Capital\n";
                            cout << "2. Itbayat\n";
                            cout << "3. Ivana\n";
                            cout << "4. Mahatao\n";
                            cout << "5. Sabtang\n";
                            cout << "6. Uyugan\n";
                        
                            
                            }

                    }
                    else if (cagayan == 2){
                        cout << "You have chosen Cagayan." << endl;

                        
                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                            if(cmb == 'C' || cmb == 'c'){
                            cout << "Here are all the cities in Cagayan: " << endl;
                            cout << "1. Tuguegarao - Capital and Regional Center\n";

                            }

                            else if(cmb == 'M' || cmb == 'm'){
                            cout << "Here are all the municipalities in Cagayan: " << endl;
                            cout << "1. Abulug\n";
                            cout << "2. Alcala\n";
                            cout << "3. Allacapan\n";
                            cout << "4. Amulung\n";
                            cout << "5. Aparri\n";
                            cout << "6. Baggao\n";
                            cout << "7. Ballesteros\n";
                            cout << "8. Buguey\n";
                            cout << "9. Calayan\n";
                            cout << "10. Camalaniugan\n";
                            cout << "11. Claveria\n";
                            cout << "12. Enrile\n";
                            cout << "13. Gattaran\n";
                            cout << "14. Gonzaga\n";
                            cout << "15. Iguig\n";
                            cout << "16. Lal-lo\n";
                            cout << "17. Lasam\n";
                            cout << "18. Pamplona\n";
                            cout << "19. Peñablanca\n";
                            cout << "20. Piat\n";
                            cout << "21. Rizal\n";
                            cout << "22. Sanchez-Mira\n";
                            cout << "23. Santa Ana\n";
                            cout << "24. Santa Praxedes\n";
                            cout << "25. Santa Teresita\n";
                            cout << "26. Santo Niño\n";
                            cout << "27. Solana\n";
                            cout << "28. Tuao\n";
        
                            }


                    }
                    else if (cagayan == 3){
                        cout << "You have chosen Isabela: ";

                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                        if(cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the Cities in Isabela: " << endl;
                        cout << "1. Cauayan\n";
                        cout << "2. Ilagan - Capital\n";
                        cout << "3. Santiago\n";
                        }

                        else if(cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Isabela: " << endl;
                        cout << "1. Alicia\n";
                        cout << "2. Angadanan\n";
                        cout << "3. Aurora\n";
                        cout << "4. Benito Soliven\n";
                        cout << "5. Burgos\n";
                        cout << "6. Cabagan\n";
                        cout << "7. Cabatuan\n";
                        cout << "8. Cordon\n";
                        cout << "9. Delfin Albano\n";
                        cout << "10. Dinapigue\n";
                        cout << "11. Echague\n";
                        cout << "12. Gamu\n";
                        cout << "13. Jones\n";
                        cout << "14. Luna\n";
                        cout << "15. Maconacon\n";
                        cout << "16. Mailig\n";
                        cout << "17. Naguilian\n";
                        cout << "18. Palanan\n";
                        cout << "19. Quezon\n";
                        cout << "20. Quirino\n";
                        cout << "21. Ramon\n";
                        cout << "22. Reina Mercedes\n";
                        cout << "23. Roxas\n";
                        cout << "24. San Agustin\n";
                        cout << "25. San Guillermo\n";
                        cout << "26. San Isidro\n";
                        cout << "27. San Manuel\n";
                        cout << "28. San Mariano\n";
                        cout << "29. San Matero\n";
                        cout << "30. San Pablo\n";
                        cout << "31. Santa Maria\n";
                        cout << "32. Santo Tomas\n";
                        cout << "33. Tumauini\n";
                        
                        }

                    }
                    else if (cagayan == 4){
                        cout << "You have chosen Nueva Viscaya: " << endl;

                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                        if(cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Nueva Viscaya: " << endl;
                        
                        }

                        else if(cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Nueva Viscaya: " << endl;
                        cout << "1. Alfonso Castañeda\n";
                        cout << "2. Ambaguio\n";
                        cout << "3. Aritao\n";
                        cout << "4. Bagabag\n";
                        cout << "5. Bambang\n";
                        cout << "6. Bayombong - Capital\n";
                        cout << "7. Diadi\n";
                        cout << "8. Dupax Del Norte\n";
                        cout << "9. Dupax Del Sur\n";
                        cout << "10. Kasibu\n";
                        cout << "11. Kayapa\n";
                        cout << "12. Quezon\n";
                        cout << "13. Santa Fe\n";
                        cout << "14. Solano\n";
                        cout << "15. Villaverde\n";
                         
                        }
                    }
                    else if (cagayan == 5){
                        cout << "You have chosen Quirino: " << endl;

                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the Cities in Quirino: " << endl;
                        
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Quirino: " << endl;
                        cout << "1. Aglipay\n";
                        cout << "2. Cabarroguis\n";
                        cout << "3. Diffun\n";
                        cout << "4. Maddela\n";
                        cout << "5. Nagtipunan\n";
                        cout << "6. Sagudav\n";    
                        }

                    }
                }

            break; //CASE2
            }
            case 3: {
            char prov;
            char cmb;
            cout << "REGION III - Central Luzon";
            cout << "PLACE INFORMATION HERE" << endl;
            cout << "Would you like to find out about the different provinces in Central Luzon? (Y/N): ";
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int centrall;
                cout << "Here are all the provinces in Central Luzon: " << endl;
                cout << "1. Aurora\n";
                cout << "2. Bataan\n";
                cout << "3. Bulacan\n";
                cout << "4. Nueva Ecija\n";
                cout << "5. Pampanga\n";
                cout << "6. Tarlac\n";
                cout << "7. Zambales\n";
                cout << "Choose from 1-7 to find out to choose if you want to find out more about the different provinces: ";
                cin >> centrall;

                    if (centrall == 1){
                    cout << "You have chosen Aurora." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Aurora: " << endl;

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Aurora: " << endl;
                        cout << "1. Baler - Capital\n";
                        cout << "2. Casiguran\n";
                        cout << "3. Dilasag\n";
                        cout << "4. Dinalungan\n";
                        cout << "5. Dingalan\n";
                        cout << "6. Dipaculao\n";
                        cout << "7. Maria Aurora\n";
                        cout << "8. San Luis\n";

                        }
                    }

                    else if (centrall == 2){
                    cout << "You have chosen Bataan." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Bataan: " << endl;
                        cout << "1. Balanga - Capital of Bataan\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Bataan: " << endl;
                        cout << "1. Abucay\n";
                        cout << "2. Bagac\n";
                        cout << "3. Dinalupihan\n";
                        cout << "4. Hermosa\n";
                        cout << "5. Limay\n";
                        cout << "6. Mariveles\n";
                        cout << "7. Morong\n";
                        cout << "8. Orani\n";
                        cout << "9. Orion\n";
                        cout << "10. Pilar\n";
                        cout << "11. Samal\n";

                        }

                    }

                    else if (centrall == 3){
                    cout << "You have chosen Bulacan." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Bulacan: " << endl;
                        cout << "1. Meycauayan\n";
                        cout << "2. San Jose del Monte\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Bulacan: " << endl;
                        cout << "1. Angat\n";
                        cout << "2. Balagtas\n";
                        cout << "3. Baliuag\n";
                        cout << "4. Bocaue\n";
                        cout << "5. Bulakan\n";
                        cout << "6. Bustos\n";
                        cout << "7. Calumpit\n";
                        cout << "8. Doña Remedios Trinidad\n";
                        cout << "9. Guiginto\n";
                        cout << "10. Hagonoy\n";
                        cout << "11. Malolos\n";
                        cout << "12. Marilao\n";
                        cout << "13. Norzagaray\n";
                        cout << "14. Pandi\n";
                        cout << "15. Paombong\n";
                        cout << "16. Plaridel\n";
                        cout << "17. Pulilan\n";
                        cout << "18. San Ildefonso\n";
                        cout << "19. San Miguel\n";
                        cout << "20. San Rafael\n";
                        cout << "21. Santa Maria\n";

                        }
                    }

                    else if (centrall == 4){
                    cout << "You have chosen Nueva Ecija." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Nueva Ecija: " << endl;
                        cout << "1. Cabanatuan\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Nueva Ecija: " << endl;
                        cout << "1. Aliaga\n";
                        cout << "2. Bongabon\n";
                        cout << "3. Cabiao\n";
                        cout << "4. Carrangln\n";
                        cout << "5. Cuyapo\n";
                        cout << "6. Gabaldon\n";
                        cout << "7. Gapan\n";
                        cout << "8. General Mamerto Natividad\n";
                        cout << "9. General Tinio\n";
                        cout << "10. Guimba\n";
                        cout << "11. Jaen\n";
                        cout << "12. Laur\n";
                        cout << "13. Licab\n";
                        cout << "14. Llanera\n";
                        cout << "15. Lupao\n";
                        cout << "16. Muñoz\n";
                        cout << "17. Nampicuan\n";
                        cout << "18. Palayan\n";
                        cout << "19. Pantabangan\n";
                        cout << "20. Peñaranda\n";
                        cout << "21. Quezon\n";
                        cout << "22. Rizal\n";
                        cout << "23. San Antonio\n";
                        cout << "24. San Isidro\n";
                        cout << "25. San Jose\n";
                        cout << "26. San Leonardo\n";
                        cout << "27. Santa Rosa\n";
                        cout << "28. Santo Domingo\n";
                        cout << "29. Talavera\n";
                        cout << "30. Talugtug\n";
                        cout << "31. Zaragoza\n";

                        }

                    }
                    
                    else if (centrall == 5){
                    cout << "You have chosen Pampanga." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Pampanga: " << endl;
                        cout << "1. Angeles - Highly Urbanized City and is thus considered independent.\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Pampanga: " << endl;
                        cout << "1. Apalit\n";
                        cout << "2. Arayat\n";
                        cout << "3. Bacolor\n";
                        cout << "4. Candaba\n";
                        cout << "5. Floridablanca\n";
                        cout << "6. Guagua\n";
                        cout << "7. Lubao\n";
                        cout << "8. Mabalacat\n";
                        cout << "9. Macabebe\n";
                        cout << "10. Magalang\n";
                        cout << "11. Masantol\n";
                        cout << "12. Mexico\n";
                        cout << "13. Minalin\n";
                        cout << "14. Porac\n";
                        cout << "15. San Fernando\n";
                        cout << "16. San Luis\n";
                        cout << "17. San Simon\n";
                        cout << "18. Santa Ana\n";
                        cout << "19. Santa Rita\n";
                        cout << "20. Santo Tomas\n";
                        cout << "21. Sasmuan\n";

                        }
                    }

                    else if (centrall == 6){
                    cout << "You have chosen Tarlac." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Tarlac: " << endl;
                        cout << "1. Tarlac City - Capital\n";
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Tarlac: " << endl;
                        cout << "1. Anao\n";
                        cout << "2. Bamban\n";
                        cout << "3. Camiling\n";
                        cout << "4. Capas\n";
                        cout << "5. Concepcion\n";
                        cout << "6. Gerona\n";
                        cout << "7. La Paz\n";
                        cout << "8. Mayantoc\n";
                        cout << "9. Moncada\n";
                        cout << "10. Paniqui\n";
                        cout << "11. Pura\n";
                        cout << "12. Ramos\n";
                        cout << "13. San Clemente\n";
                        cout << "14. San Jose\n";
                        cout << "15. San Manuel\n";
                        cout << "16. Santa Ignacia\n";
                        cout << "17. Tarlac City\n";
                        cout << "18. Victoria\n";

                        }
                    }

                    else if (centrall == 7){
                    cout << "You have chosen Zambales." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Zambales: " << endl;
                        cout << "1. Olongapo - Highly Urbanized City and is thus considered independent.\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Zambales" << endl;
                        cout << "1. Botolan\n";
                        cout << "2. Cabangan\n";
                        cout << "3. Candelaria\n";
                        cout << "4. Castillejos\n";
                        cout << "5. Iba\n";
                        cout << "6. Masinloc\n";
                        cout << "7. Palauig\n";
                        cout << "8. San Antonio\n";
                        cout << "9. San Felipe\n";
                        cout << "10. San Marcelino\n";
                        cout << "11. San Narciso\n";
                        cout << "12. Santa Cruz\n";
                        cout << "13. Subic\n";

                        }
                    }
                }
                  
            break; 
            }
            
            case 4: {
            char prov;
            char cmb;
            cout << "REGION IV-A - CALABARZON";
            cout << "PLACE INFORMATION HERE" << endl;
            cout << "Would you like to find out about the different provinces in CALABARZON? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int calabarzon;
                cout << "Here are all the provinces in CALABARZON: " << endl;
                cout << "1. Batangas\n";
                cout << "2. Cavite\n";
                cout << "3. Laguna\n";
                cout << "4. Quezon\n";
                cout << "5. Rizal\n";

                cout << "Choose from 1-5 to find out to choose if you want to find out more about the different provinces: ";
                cin >> calabarzon;

                    if (calabarzon == 1){
                    cout << "You have chosen Batangas. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Batangas: " << endl;
                        cout << "1. Batangas City - Capital of Batangas\n";
                        cout << "2. Lipa\n";
                        cout << "3. Santo Tomas\n";
                        cout << "4. Tanauan\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Batangas: " << endl;
                        cout << "1. Agoncillo\n";
                        cout << "2. Alitagtag\n";
                        cout << "3. Balayan\n";
                        cout << "4. Balete\n";
                        cout << "5. Bauan\n";
                        cout << "6. Calaca\n";
                        cout << "7. Calatagan\n";
                        cout << "8. Cuenca\n";
                        cout << "9. Ibaan\n";
                        cout << "10. Laurel\n";
                        cout << "11. Lemery\n";
                        cout << "12. Lian\n";
                        cout << "13. Lobo\n";
                        cout << "14. Mabini\n";
                        cout << "15. Malvar\n";
                        cout << "16. Mataasnakahoy\n";
                        cout << "17. Nasugbu\n";
                        cout << "18. Padre Garcia\n";
                        cout << "19. Rosario\n";
                        cout << "20. San Jose\n";
                        cout << "21. San Juan\n";
                        cout << "22. San Luis\n";
                        cout << "23. San Nicolas\n";
                        cout << "24. San Pascual\n";
                        cout << "25. Santa Teresita\n";
                        cout << "26. Taal\n";
                        cout << "27. Talisay\n";
                        cout << "28. Taysan\n";
                        cout << "29. Tingloy\n";
                        cout << "30. Tuy\n";
       
                        }

                    }

                    else if (calabarzon == 2){
                    cout << "You have chosen Cavite. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Cavite: " << endl;
                        cout << "1. Bacoor\n";
                        cout << "2. Cavite City\n";
                        cout << "3. Dasmariñas\n";
                        cout << "4. General Trias\n";
                        cout << "5. Imus - Capital of Cavite\n";
                        cout << "6. Tagaytay\n";
                        cout << "Trece Martires\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Cavite: " << endl;
                        cout << "1. Alfonso\n";
                        cout << "2. Amadeo\n";
                        cout << "3. Carmona\n";
                        cout << "4. General Emilio Aguinaldo\n";
                        cout << "5. General Mariano Alvarez\n";
                        cout << "6. Indang\n";
                        cout << "7. Kawit\n";
                        cout << "8. Magallanes\n";
                        cout << "9. Maragondon\n";
                        cout << "10. Mendez\n";
                        cout << "11. Naic\n";
                        cout << "12. Noveleta\n";
                        cout << "13. Rosario\n";
                        cout << "14. Silang\n";
                        cout << "15. Tanza\n";
                        cout << "16. Ternate\n";

                        }    
                    }

                    else if (calabarzon == 3){
                    cout << "You have chosen Laguna. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Laguna: " << endl;
                        cout << "1. Biñan\n";
                        cout << "2. Cabuyao\n";
                        cout << "3. Calamba - Regional Center of CALABARZON\n";
                        cout << "4. San Pablo\n";
                        cout << "5. San Pedro\n";
                        cout << "6. Santa Rosa\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Laguna: " << endl;
                        cout << "1. Alaminos\n";
                        cout << "2. Bay\n";
                        cout << "3. Calauan\n";
                        cout << "4. Cavinti\n";
                        cout << "5. Famy\n";
                        cout << "6. Kalayaan\n";
                        cout << "7. Liliw\n";
                        cout << "8. Los Baños\n";
                        cout << "9. Luisiana\n";
                        cout << "10. Lumban\n";
                        cout << "11. Mabitac\n";
                        cout << "12. Magdalena\n";
                        cout << "13. Majayjay\n";
                        cout << "14. Nagcarlan\n";
                        cout << "15. Paete\n";
                        cout << "16. Pagsanjan\n";
                        cout << "17. Pakil\n";
                        cout << "18. Pangil\n";
                        cout << "19. Pila\n";
                        cout << "20. Rizal\n";
                        cout << "21. Santa Cruz - Capital of Laguna\n";
                        cout << "22. Santa Maria\n";
                        cout << "23. Siniloan\n";
                        cout << "24. Victoria\n";

                        }
                    }

                    else if (calabarzon == 4){
                    cout << "You have chosen Quezon. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Quezon: " << endl;
                        cout << "1. Lucena City - Highly Urbanized City\n";
                        cout << "2. Tayabas\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Quezon: " << endl;
                        cout << "1. Agdangan\n";
                        cout << "2. Alabat\n";
                        cout << "3. Atimonan\n";
                        cout << "4. Buenavista\n";
                        cout << "5. Burdeos\n";
                        cout << "6. Candelaria\n";
                        cout << "7. Catanauan\n";
                        cout << "8. Dolores\n";
                        cout << "9. General Luna\n";
                        cout << "10. General Nakar\n";
                        cout << "11. Gumaca\n";
                        cout << "12. Infanta\n";
                        cout << "13. Jomalig\n";
                        cout << "14. Lopez\n";
                        cout << "15. Lucban\n";
                        cout << "16. Macalelon\n";
                        cout << "17. Mauban\n";
                        cout << "18. Mulanay\n";
                        cout << "19. Padre Burgos\n";
                        cout << "20. Pagbilao\n";
                        cout << "21. Panukulan\n";
                        cout << "22. Patnanungan\n";
                        cout << "23. Perez\n";
                        cout << "24. Pitogo\n";
                        cout << "25. Plaridel\n";
                        cout << "26. Polillo\n";
                        cout << "27. Quezon\n";
                        cout << "28. Real\n";
                        cout << "29. Sampaloc\n";
                        cout << "30. San Andres\n";
                        cout << "31. San Antonio\n";
                        cout << "32. San Francisco\n";
                        cout << "33. San Narciso\n";
                        cout << "34. Sariaya\n";
                        cout << "35. Tagkawayan\n";
                        cout << "36. Tiaong\n";
                        cout << "37. Unisan\n";

                        }

                    }

                    else if (calabarzon == 5){
                    cout << "You have chosen Rizal. " << endl;    

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Rizal: " << endl;
                        cout << "1. Antipolo - Capital of Rizal\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Rizal: " << endl;
                        cout << "1. Angono\n";
                        cout << "2. Baras\n";
                        cout << "3. Binangonan\n";
                        cout << "4. Cainta\n";
                        cout << "5. Cardona\n";
                        cout << "6. Jalajala\n";
                        cout << "7. Morong\n";
                        cout << "8. Pililla\n";
                        cout << "9. Rodriguez\n";
                        cout << "10. San Mateo\n";
                        cout << "11. Tanay\n";
                        cout << "12. Taytay\n";
                        cout << "13. Teresa\n";

                        }
                    }

                }

            break;
            }

            case 5: {
            char prov;
            char cmb; 
            cout << "MIMAROPA REGION";
            cout << "PLACE INFORMATION HERE" << endl;
            cout << "Would you like to find out about the different provinces in MIMAROPA? (Y/N): " << endl;
            cin >> prov; 

                if (prov == 'Y' || prov == 'y'){
                int mimaropa;

                cout << "Here are all the provinces in Mimaropa: " << endl;
                cout << "1. Marinduque\n";
                cout << "2. Occidental Mindoro\n";
                cout << "3. Oriental Mindoro\n";
                cout << "4. Palawan\n";
                cout << "5. Romblon\n";

                cout << "Choose from 1-5 to find out to choose if you want to find out more about the different provinces: ";
                cin >> mimaropa;

                    if (mimaropa == 1){
                    cout << "You have chosen Marinduque. \n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Marinduque:" << endl;

                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Marinduque:" << endl;
                        cout << "1. Boac - Capital of Marinduque\n";
                        cout << "2. Buenavista\n";
                        cout << "3. Gasan\n";
                        cout << "4. Mogpog\n";
                        cout << "5. Santa Cruz\n";
                        cout << "6. Torrijos\n";

                        }
                    }

                    else if (mimaropa == 2){
                    cout << "You have chosen Occidental Mindoro\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Occidental Mindoro:" << endl;

                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Occidental Mindoro:" << endl;
                        cout << "1. Abra de Ilog\n";
                        cout << "2. Calintaan\n";
                        cout << "3. Looc\n";
                        cout << "4. Lubang\n";
                        cout << "5. Magsaysay\n";
                        cout << "6. Mamburao - Capital of Occidental Mindoro\n";
                        cout << "7. Paluan\n";
                        cout << "8. Rizal\n";
                        cout << "9. Sablayan\n";
                        cout << "10. San Jose\n";
                        cout << "11. Santa Cruz\n";
                        
                        }
                    }

                    else if (mimaropa == 3){
                    cout << "You have chosen Oriental Mindoro\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Oriental Mindoro:" << endl;
                        cout << "1. Calapan - Capital of Oriental Mindoro and Regional Center of MIMAROPA\n";

                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Oriental Mindoro:" << endl;
                        cout << "1. Baco\n";
                        cout << "2. Bansud\n";
                        cout << "3. Bongabong\n";
                        cout << "4. Bulalacao\n";
                        cout << "5. Gloria\n";
                        cout << "6. Mansalay\n";
                        cout << "7. Naujan\n";
                        cout << "8. Pinamalayan\n";
                        cout << "9. Pola\n";
                        cout << "10. Puerto Galera\n";
                        cout << "11. Roxas\n";
                        cout << "12. San Teodoro\n";
                        cout << "13. Soccoro\n";
                        cout << "14. Victoria\n";

                        }    
                    }

                    else if (mimaropa == 4){
                    cout << "You have chosen Palawan\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Palawan:" << endl;
                        cout << "1. Puerto Princesa - Highly Urbanized City and the Capital of Palawan\n";

                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Palawan:" << endl;
                        cout << "1. Aborlan\n";
                        cout << "2. Agutaya\n";
                        cout << "3. Araceli\n";
                        cout << "4. Balabac\n";
                        cout << "5. Bataraza\n";
                        cout << "6. Brooke's Point\n";
                        cout << "7. Busuanga\n";
                        cout << "8. Cagayancillo\n";
                        cout << "9. Coron\n";
                        cout << "10. Culion\n";
                        cout << "11. Cuyo\n";
                        cout << "12. Dumaran\n";
                        cout << "13. El Nido\n";
                        cout << "14. Kalayaan\n";
                        cout << "15. Linapacan\n";
                        cout << "16. Magsaysay\n";
                        cout << "17. Narra\n";
                        cout << "18. Quezon\n";
                        cout << "19. Rizal\n";
                        cout << "20. Roxas\n";
                        cout << "21. San Vicente\n";
                        cout << "22. Sofronio Española\n";
                        cout << "23. Taytay\n";
   
                        }    

                    }

                    else if (mimaropa == 5){
                    cout << "You have chosen Romblon\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Romblon:" << endl;

                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Romblon:" << endl;
                        cout << "1. Alcantara\n";
                        cout << "2. Banton\n";
                        cout << "3. Cajidiocan\n";
                        cout << "4. Calatrava\n";
                        cout << "5. Concepcion\n";
                        cout << "6. Corcuera\n";
                        cout << "7. Ferrol\n";
                        cout << "8. Looc\n";
                        cout << "9. Magdiwang\n";
                        cout << "10. Odiongan\n";
                        cout << "11. Romblon - Capital of Romblon\n";
                        cout << "12. San Agustin\n";
                        cout << "13. San Andres\n";
                        cout << "14. San Fernando\n";
                        cout << "15. San Jose\n";
                        cout << "16. Santa Fe\n";
                        cout << "17. Santa Maria\n";

                        } 

                    }


                } 
                    
            break;
            }
            
            case 6: {
            char prov;
            char cmb;
            cout << "REGION V - Bicol Region";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the different provinces in the Bicol Region? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int bicol;

                cout << "Here are all the provinces in the Bicol Region: " << endl;
                cout << "1. Albay\n";
                cout << "2. Camarines Norte\n";
                cout << "3. Camarines Sur\n";
                cout << "4. Catanduanes\n";
                cout << "5. Masbate\n";
                cout << "6. Sorsogon\n";

                cout << "Choose from 1-6 to find out more about the different provinces: ";
                cin >> bicol;

                    if (bicol == 1){
                    cout << "You have chosen Albay." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'C'){
                        cout << "Here are all the cities in Albay: " << endl;
                        cout << "1. Legazpi - Capital of Albay and Regional Center of the Bicol Region.\n"; 
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Albay: " << endl;
                        cout << "1. Bacacay\n";
                        cout << "2. Camalig\n";
                        cout << "3. Daraga\n";
                        cout << "4. Guinobatan\n";
                        cout << "5. Jovellar\n";
                        cout << "6. Libon\n";
                        cout << "7. Ligao\n";
                        cout << "8. Malilipot\n";
                        cout << "9. Malinao\n";
                        cout << "10. Manito\n";
                        cout << "11. Oas\n";
                        cout << "12. Pio Duran\n";
                        cout << "13. Polangui\n";
                        cout << "14. Rapu-Rapu\n";
                        cout << "15. Santo Domingo\n";
                        cout << "16. Tabaco\n";
                        cout << "17. Tiwi\n";
                
                        }

                    }

                    else if (bicol == 2){
                    cout << "You have chosen Camarines Norte" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Camarines Norte: " << endl;
                        cout << "1. Basud\n";
                        cout << "2. Capalonga\n";
                        cout << "3. Daet\n";
                        cout << "4. Jose Panganiban\n";
                        cout << "5. Labo\n";
                        cout << "6. Mercedes\n";
                        cout << "7. Paracale\n";
                        cout << "8. San Lorenzo Ruiz\n";
                        cout << "9. San Vicente\n";
                        cout << "10. Santa Elena\n";
                        cout << "11. Talisay\n";
                        cout << "12. Vinzons\n";
                        
                        }
                        
                    }

                    else if (bicol == 3){
                    cout << "You have chosen Camarines Sur" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the Cities in Camarines Sur: " << endl;
                        cout << "1. Iriga\n";
                        cout << "2. Naga\n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Camarines Sur: " << endl;
                        cout << "1. Baao\n";
                        cout << "2. Balatan\n";
                        cout << "3. Bato\n";
                        cout << "4. Bombon\n";
                        cout << "5. Buhi\n";
                        cout << "6. Bula\n";
                        cout << "7. Cabusao\n";
                        cout << "8. Calabanga\n";
                        cout << "9. Camaligan\n";
                        cout << "10. Canaman\n";
                        cout << "11. Caramoan\n";
                        cout << "12. Del Gallego\n";
                        cout << "13. Gainza\n";
                        cout << "14. Garchitorena\n";
                        cout << "15. Goa\n";
                        cout << "16. Lagonoy\n";
                        cout << "17. Libmanan\n";
                        cout << "18. Lupi\n";
                        cout << "19. Magarao\n";
                        cout << "20. Milaor\n";
                        cout << "21. Minalabac\n";
                        cout << "22. Nabua\n";
                        cout << "23. Ocampo\n";
                        cout << "24. Pamplona\n";
                        cout << "25. Pasacao\n";
                        cout << "26. Pili\n";
                        cout << "27. Presentacion\n";
                        cout << "28. Ragay\n";
                        cout << "29. Sagñay\n";
                        cout << "30. San Fernando\n";
                        cout << "31. San Jose\n";
                        cout << "32. Sipocot\n";
                        cout << "33. Siruma\n";
                        cout << "34. Tigaon\n";
                        cout << "35. Tinambac\n";

                        }
                    }

                    else if (bicol == 4){
                    cout << "You have chosen Catanduanes" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Catanduanes: " << endl;

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Catanduanes: " << endl;
                        cout << "1. Bagamanoc\n";
                        cout << "2. Baras\n";
                        cout << "3. Bato\n";
                        cout << "4. Caramoran\n";
                        cout << "5. Gigmoto\n";
                        cout << "6. Pandan\n";
                        cout << "7. Panganiban\n";
                        cout << "8. San Andres\n";
                        cout << "9. San Miguel\n";
                        cout << "10. Viga\n";
                        cout << "11. Virac - Capital of Catanduanes\n";
                   
                        }

                    }

                    else if (bicol == 5){
                    cout << "You have chosen Masbate." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Masbate\n";
                        cout << "1. Masbate City - Capital of Masbate.\n"; 

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Masbate\n";
                        cout << "1. Aroroy\n";
                        cout << "2. Baleno\n";
                        cout << "3. Balud\n";
                        cout << "4. Batuan\n";
                        cout << "5. Cataingan\n";
                        cout << "6. Cawayan\n";
                        cout << "7. Claveria\n";
                        cout << "8. Dimasalang\n";
                        cout << "9. Esperanza\n";
                        cout << "10. Mandaon\n";
                        cout << "11. Milagros\n";
                        cout << "12. Mobo\n";
                        cout << "13. Monreal\n";
                        cout << "14. Palanas\n";
                        cout << "15. Pio V. Corpuz\n";
                        cout << "16. Placer\n";
                        cout << "17. San Fernando\n";
                        cout << "18. San Jacinto\n";
                        cout << "19. San Pascual\n";
                        cout << "20. Uson\n";
                            
                        }

                    }

                    else if (bicol == 6){
                    cout << "You have chosen Sorsogon." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Sorsogon: " << endl;
                        cout << "1. Sorsogon City - Capital of Sorsogon\n";
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Sorsogon: " << endl;
                        cout << "1. Barcelona\n";
                        cout << "2. Bulan\n";
                        cout << "3. Bulusan\n";
                        cout << "4. Casiguran\n";
                        cout << "5. Castilla\n";
                        cout << "6. Donsol\n";
                        cout << "7. Gubat\n";
                        cout << "8. Irosin\n";
                        cout << "9. Juban\n";
                        cout << "10. Magallanes\n";
                        cout << "11. Matnog\n";
                        cout << "12. Pilar\n";
                        cout << "13. Prieto Diaz\n";
                        cout << "14. Santa Magdalena\n";
                       
                        }

                }
               
            break;
            } 
            }
        
            case 7: {
            char prov;
            char cmb;
            cout << "REGION VI - Western Visayas";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the different provinces in Western Visayas? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
	            int westernvis;

                cout << "Here are all the provinces in Western Visayas:" << endl;
                cout << "1. Aklan\n";
                cout << "2. Antique\n";
                cout << "3. Capiz\n";
                cout << "4. Guimaras\n";
                cout << "5. Iloilo\n";
                cout << "6. Negros Occidental\n";

	            cout << "Choose from 1- to find out more about the different provinces: ";
	            cin >> westernvis;

                    if (westernvis == 1){
                    cout << "You have chosen Aklan. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Aklan: \n";

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Aklan: \n";
                        cout << "1. Atlavas\n";
                        cout << "2. Balete\n";
                        cout << "3. Banga\n";
                        cout << "4. Batan\n";
                        cout << "5. Buruanga\n";
                        cout << "6. Ibajay\n";
                        cout << "7. Kalibo - Capital of Aklan\n";
                        cout << "8. Lezo\n";
                        cout << "9. Libacao\n";
                        cout << "10. Madalag\n";
                        cout << "11. Malay\n";
                        cout << "12. Malinao\n";
                        cout << "13. Nabas\n";
                        cout << "14. New Washington\n";
                        cout << "15. Numancia\n";
                        cout << "16. Tangalan\n";
                       
                        }

                    }

                    else if (westernvis == 2){
                    cout << "You have chosen Antique";
                    
                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Antique: " << endl;
                        cout << "1. Bacolod - Highly Urbanized City\n";
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Antique: " << endl;
                        cout << "1. Anini-y\n";
                        cout << "2. Barbaza\n";
                        cout << "3. Belison\n";
                        cout << "4. Bugasong\n";
                        cout << "5. Caluya\n";
                        cout << "6. Culasi\n";
                        cout << "7. Hamtic\n";
                        cout << "8. Laua-an\n";
                        cout << "9. Libertad\n";
                        cout << "10. Pandan\n";
                        cout << "11. Patnongon\n";
                        cout << "12. San Jose de Buenavista\n";
                        cout << "13. San Remigio\n";
                        cout << "14. Sebaste\n";
                        cout << "15. Sibalom\n";
                        cout << "16. Tibiao\n";
                        cout << "17. Tobias Fornier\n";
                        cout << "18. Valderrama\n";

                        }

                    }

                    else if (westernvis == 3){
                    cout << "You have chosen Capiz" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Capiz: " << endl;
                        cout << "1. Roxas City - Capital of Capiz\n";
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Capiz: " << endl;
                        cout << "1. Cuartero\n";
                        cout << "2. Dao\n";
                        cout << "3. Dumalag\n";
                        cout << "4. Dumarao\n";
                        cout << "5. Ivisan\n";
                        cout << "6. Jamindan\n";
                        cout << "7. Maayon\n";
                        cout << "8. Mambusao\n";
                        cout << "9. Panay\n";
                        cout << "10. Panitan\n";
                        cout << "11. Pilar\n";
                        cout << "12. Pontevedra\n";
                        cout << "13. President Roxas\n";
                        cout << "14. Sapian\n";
                        cout << "15. Sigma\n";
                        cout << "16. Tapaz\n";
                        
                        }
                    }

                    else if (westernvis == 4){
                    cout << "You have chosen Guimaras." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Guimaras: " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Guimaras: " << endl;
                        cout << "1. Buenavista\n";
                        cout << "2. Jordan - Capital of Guimaras\n";
                        cout << "3. Nueva Valencia\n";
                        cout << "4. San Lorenzo\n";
                        cout << "5. Sibunag\n";
                        
                        }
                    }

                    else if (westernvis == 5){
                    cout << "You have chosen Iloilo\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Iloilo: " << endl;
                        cout << "1. Passi\n";
                        cout << "2. Iloilo City - Highly Urbanized City\n";
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Iloilo: " << endl;
                        cout << "1. Ajuy\n";
                        cout << "2. Alimodian\n";
                        cout << "3. Anilao\n";
                        cout << "4. Badiangan\n";
                        cout << "5. Balasan\n";
                        cout << "6. Banate\n";
                        cout << "7. Barotac Nuevo\n";
                        cout << "8. Barotac Viejo\n";
                        cout << "9. Batad\n";
                        cout << "10. Bingawan\n";
                        cout << "11. Cabatuan\n";
                        cout << "12. Calinog\n";
                        cout << "13. Carles\n";
                        cout << "14. Concepcion\n";
                        cout << "15. Dingle\n";
                        cout << "16. Dueñas\n";
                        cout << "17. Dumangas\n";
                        cout << "18. Estancia\n";
                        cout << "19. Guimbal\n";
                        cout << "20. Igbaras\n";
                        cout << "21. Janiuay\n";
                        cout << "22. Lambunao\n";
                        cout << "23. Leganes\n";
                        cout << "24. Lemery\n";
                        cout << "25. Leon\n";
                        cout << "26. Maasin\n";
                        cout << "27. Miagao\n";
                        cout << "28. Mina\n";
                        cout << "29. New Lucena\n";
                        cout << "30. Oton\n";
                        cout << "31. Pavia\n";
                        cout << "32. Pototan\n";
                        cout << "33. San Dionisio\n";
                        cout << "34. San Enrique\n";
                        cout << "35. San Joaquin\n";
                        cout << "36. San Miguel\n";
                        cout << "37. San Rafael\n";
                        cout << "38. Santa Barbara\n";
                        cout << "39. Sara\n";
                        cout << "40. Tigbauan\n";
                        cout << "41. Tubungan\n";
                        cout << "42. Zarraga\n";
                    
                        }
                    }
                    
                    else if (westernvis == 6){
                    cout << "You have chosen Negros Occidental. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Negros Occidental: " << endl;
                        cout << "1. Bago\n";
                        cout << "2. Cadiz\n";
                        cout << "3. Escalante\n";
                        cout << "4. Himamaylan\n";
                        cout << "5. Kabankalan\n";
                        cout << "6. La Carlota\n";
                        cout << "7. Sagay\n";
                        cout << "8. San Carlos\n";
                        cout << "9. Silay\n";
                        cout << "10. Sipalay\n";
                        cout << "11. Talisay\n";
                        cout << "12. Victorias\n";
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Negros Occidental: " << endl;
                        cout << "1. Binalbagan\n";
                        cout << "2. Calatrava\n";
                        cout << "3. Candoni\n";
                        cout << "4. Cauayan\n";
                        cout << "5. Enrique B. Magalona\n";
                        cout << "6. Hinigaran\n";
                        cout << "7. Hinoba-an\n";
                        cout << "8. Ilog\n";
                        cout << "9. Isabela\n";
                        cout << "10. La Castellana\n";
                        cout << "11. Manapla\n";
                        cout << "12. Moises Padilla\n";
                        cout << "13. Murcia\n";
                        cout << "14. Pontevedra\n";
                        cout << "15. Pulupandan\n";
                        cout << "16. Salvador Benedicto\n";
                        cout << "17. San Enrique\n";
                        cout << "18. Toboso\n";
                        cout << "19. Valladolid\n";
                       
                        }

                    }

            break;
            }
            }

            case 8: {
            char prov;
            char cmb;
            cout << "REGION VII - Central Visayas";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the different provinces in Central Visayas? (Y/N): ";
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int centralvis;

                cout << "Here are all the provinces in Central Visayas: " << endl;
                cout << "1. Bohol\n";
                cout << "2. Cebu\n";
                cout << "3. Negros Oriental\n";
                cout << "4. Siquijor\n";

                cout << "Choose from 1-4 to find out more about the different provinces: ";
                cin >> centralvis;

                    if (centralvis == 1){
                    cout << "You have chosen Bohol. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (centralvis == 2){
                    cout << "You have chosen Cebu. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (centralvis == 3){
                    cout << "You have chosen Negros Oriental. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (centralvis == 4){
                    cout << "You have chosen Siquijor. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }
                }
            
            break;
            }

            case 9: {
            char prov;
            char cmb;    
            cout << "REGION VIII - Eastern Visayas" << endl;
            cout << "PLACE INFORMATION HERE" << endl;
            
            cout << "Would you like to find out about the different provinces in  ? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int easternvis;

                cout << "Here are all the provinces in Eastern Visayas: " << endl;
                cout << "1. Biliran\n";
                cout << "2. Eastern Samar\n";
                cout << "3. Leyte\n";
                cout << "4. Northern Samar\n";
                cout << "5. Samar\n";
                cout << "6. Southern Leyte\n";

                cout << "Choose from 1-6 to find out more about the different provinces: ";
	            cin >> easternvis;

                    if (easternvis == 1){
                    cout << "You have chosen Biliran. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (easternvis == 2){
                    cout << "You have chosen Eastern Samar. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (easternvis == 3){
                    cout << "You have chosen Leyte. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (easternvis == 4){
                    cout << "You have chosen Northern Samar. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                
                    }

                    else if (easternvis == 5){
                    cout << "You have chosen Samar. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (easternvis == 6){
                    cout << "You have chosen Southern Leyte. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }
                }
            break;
            }
      
            case 10: {
            char prov;
            char cmb;
            cout << "REGION IX - Zamboanga Peninsula" << endl;
            cout << "Has a total population of 3,875,576 people as of 2020." << endl;
            cout << "Total Area of 169.04 per km^2." << endl;
            cout << "Has a total of 4 cities" << endl;
            cout << "Has 67 municipalities" << endl;
            cout << "Has 1904 Barangays." << endl;
            cout << "\nWould you like to find out about the different provinces in the Zamboanga Peninsula? (Y/N): ";
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int zamboangapen;

                cout << "Here are all the provinces in the Zamboanga Peninsula: " << endl;
                cout << "1. Zamboanga Del Norte\n";
                
                cout << "Choose from 1- to find out more about the different provinces: " << endl;
                cin >> zamboangapen;

                    if (zamboangapen == 1){
                    cout << "You have chosen ." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (zamboangapen == 2){
                    cout << "You have chosen " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (zamboangapen == 3){
                    cout << "You have chosen " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }
                }
            
            break;
            }

            case 11: {
            char prov;
            char cmb;
            cout << "REGION X - Northern Mindanao";
            cout << "PLACE INFORMATION HERE" << endl;
            
            cout << "Would you like to find out about the different provinces in Northern Mindanao? (Y/N): ";
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int northernmind;

                cout << "Here are all the provinces in Northern Mindanao: " << endl;
                cout << "1. Bukidnon\n";
                cout << "2. Camiguin\n";
                cout << "3. Lanao del Norte\n";
                cout << "4. Misamis Occidental\n";
                cout << "5. Misamis Oriental\n";

                cout << "Choose from 1-5 to find out more about the different provinces: ";
                cin >> northernmind;

                    if (northernmind == 1){
                    cout << "You have chosen Bukidnon" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Bukidnon: " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Bukidnon: " << endl;
                        }
                    }

                    else if (northernmind == 2){
                    cout << "You have chosen Camiguin" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Camiguin: " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Camiguin: " << endl;
                        }

                    }

                    else if (northernmind == 3){
                    cout << "You have chosen Lanao del Norte" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Lanao del Norte: " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Lanao del Norte: " << endl;
                        }
                    }

                    else if (northernmind == 4){
                    cout << "You have chosen Misamis Occidental. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Misamis Occidental: " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Misamis Occidental: " << endl;
                        }

                    }

                    else if (northernmind == 5){
                    cout << "You have chosen Misamis Oriental" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in Misamis Oriental: " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in Misamis Oriental: " << endl;
                        }
                    }

                }

            break;
            }
           
            case 12: {
            char prov;
            char cmb;
            cout << "REGION XI - Davao Region";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the different provinces in the Davao Region? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int davaoreg;

                cout << "Here are all the provinces in the Davao Region: " << endl;
                cout << "1. Davao de Oro\n";
                cout << "2. Davao del Norte\n";
                cout << "3. Davao del Sur\n";
                cout << "4. Davao Occidental\n";
                cout << "5. Davao Oriental\n";

                cout << "Choose from 1-5 to find out more about the different provinces: ";
                cin >> davaoreg;

                    if (davaoreg == 1){
                    cout << "You have chosen Davao de Oro\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (davaoreg == 2){
                    cout << "You have chosen Davao del Norte\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (davaoreg == 3){
                    cout << "You have chosen Davao del Sur\n";
                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (davaoreg == 4){
                    cout << "You have chosen Davao Occidental. " << endl;
                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (davaoreg == 5){
                    cout << "You have chosen Davao Oriental. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }
                }
            
            

            break; 
            }

            case 13: {
            char prov;
            char cmb;
            cout << "REGION XII - SOCCSKSARGEN";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the different provinces in  ? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int soccsk;

                cout << "Here are all the provinces in SOCCSKSARGEN: " << endl;
                cout << "1. Cotabato\n";
                cout << "2. Sarangani\n";
                cout << "3. South Cotabato\n";
                cout << "4. Sultan Kudarat\n";

                cout << "Choose from 1- to find out more about the different provinces: ";
	            cin >> soccsk;

                    if (soccsk == 1){
                    cout << "You have chosen Cotabato." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (soccsk == 2){
                    cout << "You have chosen Sarangani." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (soccsk == 3){
                    cout << "You have chosen South Cotabato." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (soccsk == 4){
                    cout << "You have chosen Sultan Kudarat." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                }
            

            break; 
            }
           
            case 14: {
            char prov;
            char cmb; 
            cout << "REGION XIII - CARAGA";
            cout << "PLACE INFORMATION HERE" << endl;
            cout << "Would you like to find out about the different provinces in  ? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int caraga;

                cout << "Here are all the provinces in CARAGA: " << endl;
                cout << "1. Agusan del Norte\n";
                cout << "2. Agusan del Sur\n";
                cout << "3. Dinagat Islands\n";
                cout << "4. Surigao del Norte\n";
                cout << "5. Surigao del Sur\n";

                cout << "Choose from 1- to find out more about the different provinces: ";
	            cin >> caraga;

                    if (caraga == 1){
                    cout << "You have chosen Agusan del Norte" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (caraga == 2){
                    cout << "You have chosen Agusan del Sur" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (caraga == 3){
                    cout << "You have chosen Dinagat Islands" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (caraga == 4){
                    cout << "You have chosen Surigao del Norte" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (caraga == 5){
                    cout << "You have chosen Surigao del Sur" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }
                }

            break; 
            }
         
            case 15: {
            char cmb;
            cout << "NCR - NATIONAL CAPITAL REGION";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
            cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
            
            break; 
            }
    
            case 16: {
            char prov;
            char cmb;
            cout << "CAR - Cordillera Administrative Region";
            cout << "PLACE INFORMATION HERE" << endl;

            cout << "Would you like to find out about the different provinces in  ? (Y/N): " << endl;
            cin >> prov;

                if (prov == 'Y' || prov == 'y'){
                int car;

                cout << "Here are all the provinces in the Cordillera Administrative Region:" << endl;
                cout << "1. Abra\n";
                cout << "2. Apayao\n";
                cout << "3. Benguet\n";
                cout << "4. Ifugao\n";
                cout << "5. Kalinga\n";
                cout << "6. Mountain Province\n";

	            cout << "Choose from 1-6 to find out more about the different provinces: ";
	            cin >> car;
                
                    if (car == 1){
                    cout << "You have chosen Abra" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (car == 2){
                    cout << "You have chosen Apayao" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (car == 3){
                    cout << "You have chosen Benguet" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (car == 4){
                    cout << "You have chosen Ifugao" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (car == 5){
                    cout << "You have chosen Kalinga" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }

                    else if (car == 6){
                    cout << "You have chosen Mountain Province." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }

                    }
                }
            break;
            }
            
            case 17: {
            char prov;
            char cmb;
            cout << "BARMM - Bangsamoro Autonomous in Muslim Mindanao";
            cout << "PLACE INFORMATION HERE" << endl;
            cout << "Would you like to find out about the different provinces in  ? (Y/N): " << endl;
            cin >> prov;
            
                if (prov == 'Y' || prov == 'y'){
                int barmm;

                cout << "Here are all the provinces in BARMM: " << endl;
                cout << "1. Basilan\n";
                cout << "2. Lanao del Sur\n";
                cout << "3. Maguindanao\n";
                cout << "4. Sulu\n";
                cout << "5. Tawi-Tawi\n";

                cout << "Choose from 1-5 to find out more about the different provinces: ";
	            cin >> barmm;

                    if (barmm == 1){
                    cout << "You have chosen Basilan. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (barmm == 2){
                    cout << "You have chosen Lanao del Sur" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (barmm == 3){
                    cout << "You have chosen Maguindanao" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }

                    else if (barmm == 4){
                    cout << "You have chosen Sulu" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    } 

                    else if (barmm == 5){
                    cout << "You have chosen Tawi-Tawi" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        cout << "Here are all the cities in : " << endl;
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        cout << "Here are all the municipalities in : " << endl;
                        }
                    }
                }
            

            break;
            }

            }

                if  (region == 1 || region == 2 || region == 3 || region == 4 || region == 5 || region == 6 || region == 7 || region == 8 || region == 9 || region == 10 || region == 11 || region == 12 || region == 13 || region == 14 || region == 15 || region == 16 || region == 17) {
                    validation = true;
                    }
                else {
                    cout << "Corresponding number not detected. Please check your spelling. " << endl;
                }    
        } while (info == 'Y');

        }
        

        }


        else {
        cout << "INVALID INPUT. PLEASE ENTER AN INPUT AGAIN. ";
        cout << "Would you like to rerun the program? (Y/N) ";
        cin >> decision1;
        cin.ignore();  

            if (decision1 != 'Y' && decision1 != 'y'){
                continue; 
            } 
        }
    
    
    cout << "Would you like to find about something different? (Y/N) ";
    cin >> decision2;
    cin.ignore();

    } while (decision2 == 'Y' || decision2 == 'y');
  

    cout << "Thank you for using The Geographical Information System of the Philippines!";
    return 0;
}
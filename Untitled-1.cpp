#include <iostream> 
#include <string>
#include <limits>
using namespace std;

int main () {
    string greeting = "\nWELCOME TO THE GEOGRAPHICAL INFORMATION OF THE PHILIPPINES!";
    char choose;
    char decision1, decision2;

    do {
        cout << greeting << endl;
        cout << "WOULD YOU LIKE TO FIND OUT ABOUT THE DIFFERENT REGIONS? (Y/N): ";
        cin >> choose;

        if (choose == 'Y' || choose == 'y'){
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
        cout << "15. NCR - National Capital Region" << endl;
        cout << "16. CAR - Cordillera Administrative Region" << endl;
        cout << "17. BARMM - Bangsamoro Autonomous Region in Muslim" << endl;
        cout << "Select a number corresponding to a region to view more details about it: ";
        cin >> region;

        if (cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        cout << "Invalid input. Please enter a number between 1-17.\n ";

        } else if (region >= 1 && region <= 17) {
        validation = true;
        } else {
        cout << "CORRESPONDING NUMBER NOT DETECTED. PLEASE ENTER A NUMBER BETWEEN 1-17.\n";
        }
        
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
                            char citybarangays;
                            cout << "Here are all the Cities in Ilocos Region: " << endl;
                            cout << "1. Laoag - Capital City in Ilocos Norte" << endl;
                            cout << "2. Batac - Component City" << endl;

                            cout << "Would you like to find out more about the city and the barangays within it? (Y/N): ";
                            cin >> citybarangays;
                            
                                if (citybarangays == 'Y' || citybarangays == 'y'){
                                int barangays;
                                cout << "Enter a number corresponding to a city to get information about it and its barangays: ";
                                cin >> barangays;
                                switch (barangays){
                            
                                case 1: {
                                cout << "You have chosen Laoag. \n";
                                cout << "Mayor: Michael Marcos Keon";
                                cout << "The City of Laoag is a 3rd class component city and it's the capital of Ilocos Norte. The word Laoag means 'light' which is why Laoag is also called Sunshine city. Laoag is the largest city in northern luzon and it's a trade centre for an agricultural region producing corn (maize), rice, and tobacco, the city has warehouses, wholesale outlets, and several cigarette factories.\n";
                                cout << "According to the 2020 census, its total population is 111,651.\n";
                                cout << "The City of Laoag's ZIP code is 2900.\n";
                                cout << "Mayor: Michael Marcos Keon";
                                cout << "Here are all the barangays in Laoag:\n";
                                cout << "1. Barangay No.1, San Lorenzo\n";
                                cout << "2. Barangay No.10, San Jose\n";
                                cout << "3. Barangay No.11, Santa Balbina\n";
                                cout << "4. Barangay No.12, San Isidro\n";
                                cout << "5. Barangay No.13, Nuestra Señora de Visitacion\n";
                                cout << "6. Barangay No.14, Santo Tomas\n";
                                cout << "7. Barangay No.15, San Guillermo\n";
                                cout << "8. Barangay No.16, San Jacinto\n";
                                cout << "9. Barangay No.17, San Francisco\n";
                                cout << "10. Barangay No.18, San Quirino\n";
                                cout << "11. Barangay No.19, Santa Marcela\n";
                                cout << "12. Barangay No.2, Santa Joaquina\n";
                                cout << "13. Barangay No.20, San Miguel\n";
                                cout << "14. Barangay No.21, San Pedro\n";
                                cout << "15. Barangay No.22, San Andres\n";
                                cout << "16. Barangay No.23, San Matias\n";
                                cout << "17. Barangay No.24, Nuestra Señora de Consolacion\n";
                                cout << "18. Barangay No.25, Santa Cayetana\n";
                                cout << "19. Barangay No.26, San Marcelino\n";
                                cout << "20. Barangay No.27, Nuestra Señora de Soledad\n";
                                cout << "21. Barangay No.28, San Bernardo\n";
                                cout << "22. Barangay No.29, Santo Tomas\n";
                                cout << "23. Barangay No.3, Nuestra Señora del Rosario\n";
                                cout << "24. Barangay No.30-A, Suyo\n";
                                cout << "25. Barangay No.30-B, Santa Maria\n";
                                cout << "26. Barangay No.31, Talingaan\n";
                                cout << "27. Barangay No.32-A, La Paz East\n";
                                cout << "28. Barangay No.32-B, La Paz West\n";
                                cout << "29. Barangay No.32-C, La Paz East\n";
                                cout << "30. Barangay No.33-A, La Paz Proper\n";
                                cout << "31. Barangay No.33-B, La Paz Proper\n";
                                cout << "32. Barangay No.34-A, Gabu Norte West\n";
                                cout << "33. Barangay No.34-B, Gabu Norte East\n";
                                cout << "34. Barangay No.35, Gabu Sur\n";
                                cout << "35. Barangay No.36, Araniw\n";
                                cout << "36. Barangay No.37, Calayab\n";
                                cout << "37. Barangay No.38-A, Mangato East\n";
                                cout << "38. Barangay No.38-B, Mangato West\n";
                                cout << "39. Barangay No.39, Santa Rosa\n";
                                cout << "40. Barangay No.4, San Guillermo\n";
                                cout << "41. Barangay No.40, Balatong\n";
                                cout << "42. Barangay No.41, Balacad\n";
                                cout << "43. Barangay No.42, Apaya3\n";
                                cout << "44. Barangay No.43, Cavit\n";
                                cout << "45. Barangay No.44, Zamboanga\n";
                                cout << "46. Barangay No.45, Tangid1\n";
                                cout << "47. Barangay No.46, Nalbo\n";
                                cout << "48. Barangay No.47, Bengcag\n";
                                cout << "49. Barangay No.48-A, Cabungaan North\n";
                                cout << "50. Barangay No.48-B, Cabungaan South\n";
                                cout << "51. Barangay No.49-A, Darayday \n";
                                cout << "52. Barangay No.5, San Pedro\n";
                                cout << "53. Barangay No.50, Buttong\n";
                                cout << "54. Barangay No.51-A, Nangalisan East\n";
                                cout << "55. Barangay No.51-B, Nangalisan West\n";
                                cout << "56. Barangay No.52-A, San Mateo\n";
                                cout << "57. Barangay No.52-B, Lataag\n";
                                cout << "58. Barangay No.53, Rioeng\n";
                                cout << "59. Barangay No.54-A, Lagui-Sail\n";
                                cout << "60. Barangay No.54-B, Camangaan\n";
                                cout << "61. Barangay No.55-A, Barit-Pandan\n";
                                cout << "62. Barangay No.55-B, Salet-Bulangon\n";
                                cout << "63. Barangay No.55-C, Vira\n";
                                cout << "64. Barangay No.56-A, Bacsil North\n";
                                cout << "65. Barangay No.56-B, Bacsil South\n";
                                cout << "66. Barangay No.57, Pila\n";
                                cout << "67. Barangay No.58, Casili\n";
                                cout << "68. Barangay No.59-A, Dibua South\n";
                                cout << "69. Barangay No.6, San Agustin\n";
                                cout << "70. Barangay No.60-A, Caaoacan\n";
                                cout << "71. Barangay No.60-B, Madiladig\n";
                                cout << "72. Barangay No.61, Cataban\n";
                                cout << "73. Barangay No.62-A, Navotas North\n";
                                cout << "74. Barangay No.62-B, Navotas South\n";
                                cout << "75. Barangay No.7-A, Nuestra Señora de Natividad\n";
                                cout << "76. Barangay No.7-B, Nuestra Señora de Natividad\n";
                                cout << "77. Barangay No.8, San Vicente\n";
                                cout << "78. Barangay No.9, Santa Angela\n";
                                break;
                                }
                                
                                case 2: {
                                cout << "You have chosen Batac. \n";
                                cout << "Mayor: Albert D. Chua\n";
                                cout << "The City of Batac is a 5th class component city. It is the birthplace of Gregorio Aglipay, the founder of the Philippine Independent Church, also known as the Aglipayan Church, and also to General Artemio Ricarte, often known as the father of the Philippine Army."; 
                                cout << "According to the 2020 census, its total population is 55,484.\n";
                                cout << "The City of Batac's ZIP code is 2906\n";         
                                cout << "Here are all the barangays in Batac and their population: \n";
                                cout << "1. Ablan Poblacion\n";
                                cout << "2. Acosta Poblacion\n";
                                cout << "3. Aglipay\n";
                                cout << "4. Baay\n";
                                cout << "5. Baligat\n";
                                cout << "6. Baoa East\n";
                                cout << "7. Baoa West\n";
                                cout << "8. Barani\n";
                                cout << "9. Ben-agan\n";
                                cout << "10. Bil-loca\n";
                                cout << "11. Biningan\n";
                                cout << "12. Bungon\n";
                                cout << "13. Callaguip\n";
                                cout << "14. Camandingan\n";
                                cout << "15. Camguidan\n";
                                cout << "16. Cangrunaan\n";
                                cout << "17. Capacuan\n";
                                cout << "18. Caunayan\n";
                                cout << "19. Colo\n";
                                cout << "20. Dariwdiw\n";
                                cout << "21. Lacub\n";
                                cout << "22. Mabaleng\n";
                                cout << "23. Magnuang\n";
                                cout << "24. Maipalig\n";
                                cout << "25. Nagbacalan\n";
                                cout << "26. Naguirangan\n";
                                cout << "27. Palongpong\n";
                                cout << "28. Palpalicong\n";
                                cout << "29. Parangopong\n";
                                cout << "30. Payao\n";
                                cout << "31. Pimentel\n";
                                cout << "32. Quiling Norte\n";
                                cout << "33. Quiling Sur\n";
                                cout << "34. Quiom\n";
                                cout << "35. Rayuray\n";
                                cout << "36. Ricarte Poblacion\n";
                                cout << "37. San Julian\n";
                                cout << "38. San Mateo\n";
                                cout << "39. San Pedro\n";
                                cout << "40. Suabit\n";
                                cout << "41. Sumader\n";
                                cout << "42. Tabug\n";
                                cout << "43. Valdez Poblacion\n";        
                                break;
                                }
                                
                                }
                                
                                }
                            }
                            else if (cmb == 'M' || cmb == 'M'){//IFMUNICIPALITIES
                            char municipal;
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
                            cout << "Would you like to find out more about the municipalities? (Y/N): ";
                            cin >> municipal;
                            
                                if (municipal == 'Y' || municipal == 'y'){
                                int barangays;
                                
                                cout << "Enter a number corresponding to a municipality to get information about it: ";
                                 cin >> barangays;
                                 
                            switch (barangays){
                            case 1: {
                            cout << "You have chosen the municipality of Adams. \n";
                            
                            break;
                            }
                            
                            case 2: {
                            cout << "You have chosen the municipality of Bacarra. \n";
                            

                            break;
                            }
                            
                            case 3: {
                            cout << "You have chosen the municipality of Badoc. \n";
                            
                            break;
                            }
                            
                            case 4: {
                            cout << "You have chosen the municipality of Bangui. \n";
                            
                            break;
                            }
                            
                            case 5: {
                            cout << "You have chosen the municipality of Banna. \n";
                            
                            break;
                            }
                            
                            case 6: {
                            cout << "You have chosen the municipality of Burgos. \n";
                            
                            break;
                            }
                            
                            case 7: {
                            cout << "You have chosen the municipality of Carasi. \n";
                            
                            break;
                            }
                            
                            case 8: {
                            cout << "You have chosen the municipality of Currimao. \n";
                            
                            break;
                            }
                            
                            case 9: {
                            cout << "You have chosen the municipality of Dingras. \n";
                            
                            break;
                            }
                            
                            case 10: {
                            cout << "You have chosen the municipality of Dumalneg. \n";
                            
                            break;
                            }
                            
                            case 11: {
                            cout << "You have chosen the municipality of Marcos. \n";
                            
                            break;
                            }
                            
                            case 12: {
                            cout << "You have chosen the municipality of Nueva Era. \n";
                            
                            break;
                            }
                            
                            case 13: {
                            cout << "You have chosen the municipality of Pagudpud. \n";
                            
                            break;
                            }
                            
                            case 14: {
                            cout << "You have chosen the municipality of Paoay. \n";
                            
                            break;
                            }
                            
                            case 15: {
                            cout << "You have chosen the municipality of Pasuquin. \n";
                            
                            break;
                            }
                            
                            case 16: {
                            cout << "You have chosen the municipality of Piddig. \n";
                            
                            break;
                            }
                            
                            case 17: {
                            cout << "You have chosen the municipality of Pinili. \n";
                            
                            break;
                            }
                            
                            case 18: {
                            cout << "You have chosen the municipality of San Nicolas. \n";
                            
                            break;
                            }
                            
                            case 19: {
                            cout << "You have chosen the municipality of Sarrat. \n";
                            
                            break;
                            }
                            
                            case 20: {
                            cout << "You have chosen the municipality of Solsona. \n";
                            
                            
                            break;    
                            }
                            
                            case 21: {
                            cout << "You have chosen the municipality of Vintar. \n";
                            
                            break;
                            }

                            default:{
                            break;
                            }

                            }
                            
                    }//municipal

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
                        char citybarangays;
                        cout << "Here are all the Cities in Ilocos Sur: " << endl;
                        cout << "1. Vigan - Capital City in Ilocos Sur" << endl;
                        cout << "2. Candon - Component City" << endl;
                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1: {
                        cout << "You have chosen Vigan. \n";
                        cout << "Mayor: Ferdinand C. Medina\n";
                        cout << "The City of Vigan is a 4th class component city and it's the capital of the province of Ilocos Sur. It's name during the Spanish Foundation was Villa Fernandina or Town of Ferdinand. Vigan is unique for having preserved much of its Hispanic colonial character, particularly its grid street pattern and historic urban lay out. Its significance also lies on how the different architectural influences are blended to create a homogenous townscape.\n";
                        cout << "The City of Vigan's ZIP code is 2700.\n";
                        cout << "According to the 2020 census, it's total population is 53,935.\n";
                        cout << "Here are all the barangays in Vigan. \n";
                        cout << "1. Ayusan Norte\n";
                        cout << "2. Ayusan Sur\n";
                        cout << "3. Barangay I\n";
                        cout << "4. Barangay II\n";
                        cout << "5. Barangay III\n";
                        cout << "6. Barangay IV\n";
                        cout << "7. Barangay IX\n";
                        cout << "8. Barangay V\n";
                        cout << "9. Barangay VI\n";
                        cout << "10. Barangay VII\n";
                        cout << "11. Barangay VIII\n";
                        cout << "12. Barraca\n";
                        cout << "13. Beddeng Daya\n";
                        cout << "14. Beddeng Laud\n";
                        cout << "15. Bongtolan\n";
                        cout << "16. Bulala\n";
                        cout << "17. Cabalangegan\n";
                        cout << "18. Cabaroan Daya\n";
                        cout << "19. Cabaroan Laud\n";
                        cout << "20. Camangaan\n";
                        cout << "21. Capangpangan\n";
                        cout << "22. Mindoro\n";
                        cout << "23. Nagsangalan\n";
                        cout << "24. Pantay Daya\n";
                        cout << "25. Pantay Fatima\n";
                        cout << "26. Pantay Laud\n";
                        cout << "27. Paoa\n";
                        cout << "28. Paratong\n";
                        cout << "29. Pong-ol\n";
                        cout << "30. Purok-a-bassit\n";
                        cout << "31. Purok-a-dackel\n";
                        cout << "32. Raois\n";
                        cout << "33. Rugsuanan\n";
                        cout << "34. Salindeg\n";
                        cout << "35. San Jose\n";
                        cout << "36. San Julian Norte\n";
                        cout << "37. San Julian Sur\n";
                        cout << "38. San Pedro\n";
                        cout << "39. Tamag\n";
                        break;
                        }
                        
                        case 2: {
                        cout << "You have chosen Candon. \n";
                        cout << "Mayor: Eric Dario Singson\n";
                        cout << "The City of Candon is a 4th class component city and it is dubbed as the Tobacco Capital of the Phiippines. The word 'CANDON' comes from 'CANDONG', which the natives gave to a big tree in the village around which life, culture, and beauty is centered. It is the foremost trading center in the second district of Ilocos Sur.\n";
                        cout << "The city of Candon's ZIP code is 2710.\n";
                        cout << "According to the 2020 census, it's total population is 61,432.\n";
                        cout << "Here are all the barangays in Candon. \n";
                        cout << "1. Allangigan Primero\n";
                        cout << "2. Allangigan Segundo\n";
                        cout << "3. Amguid\n";
                        cout << "4. Ayudante\n";
                        cout << "5. Bagani Camposanto\n";
                        cout << "6. Bagani Gabor\n";
                        cout << "7. Bagani Togco\n";
                        cout << "8. Bagani Ubbog\n";
                        cout << "9. Bagar\n";
                        cout << "10. Balingaoan\n";
                        cout << "11. Bugnay\n";
                        cout << "12. Calaoaan\n";
                        cout << "13. Calongbuyan\n";
                        cout << "14. Caterman\n";
                        cout << "15. Cubcubboot\n";
                        cout << "16. Darapidap\n";
                        cout << "17. Langlangca Primero\n";
                        cout << "18. Langlangca Segundo\n";
                        cout << "19. Oaig-Daya\n";
                        cout << "20. Palacapac\n";
                        cout << "21. Paras\n";
                        cout << "22. Parioc Primero\n";
                        cout << "23. Parioc Segundo\n";
                        cout << "24. Patpata Primero\n";
                        cout << "25. Patpata Segundo\n";
                        cout << "26. Paypayad\n";
                        cout << "27. Salvador Primero\n";
                        cout << "28. Salvador Segundo\n";
                        cout << "29. San Agustin\n";
                        cout << "30. San Andres\n";
                        cout << "31. San Antonio\n";
                        cout << "32. San Isidro\n";
                        cout << "33. San Jose\n";
                        cout << "34. San Juan\n";
                        cout << "35. San Nicolas\n";
                        cout << "36. San Pedro\n";
                        cout << "37. Santo Tomas\n";
                        cout << "38. Tablac\n";
                        cout << "39. Talogtog\n";
                        cout << "40. Tamurong Primero\n";
                        cout << "41. Tamurong Segundo\n";
                        cout << "42. Villarica\n";
                        break;
                        }

                        default: {
                        cout << "There are only 2 cities in Ilocos Sur. Invalid Input. " << endl;
                        }
                        }

                        }
                        } //IFCITIES

                        else if (cmb == 'M' || cmb == 'm'){ //IFMUNICIPALITIES
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                 
                        switch (barangays){
                        case 1: {
                        cout << "You have chosen the municipality of Alilem. \n";
                        
                        break;
                        }

                        case 2: {
                        cout << "You have chosen the municipality of Banayoyo. \n";
                        
                        break;
                        }
                        
                        case 3: {
                        cout << "You have chosen the municipality of Bantay. \n";
                        
                        break;
                        }

                        case 4: {
                        cout << "You have chosen the municipality of Burgos. \n";
                        
                        break;
                        }

                        case 5: {
                        cout << "You have chosen the municipality of Cabugao. \n";
                        
                        break;
                        }

                        case 6: {
                        cout << "You have chosen the municipality of Caoayan. \n";
                        
                        break;
                        }

                        case 7: {
                        cout << "You have chosen the municipality of Cervantes. \n";
                        
                        break;
                        }

                        case 8: {
                        cout << "You have chosen the municipality of Galimuyod. \n";
                        
                        break;
                        }

                        case 9: {
                        cout << "You have chosen the municipality of Gregorio del Pilar. \n";
                        
                        break;
                        }

                        case 10: {
                        cout << "You have chosen the municipality of Lidlidda. \n";
                        
                        break;
                        }

                        case 11: {
                        cout << "You have chosen the municipality of Magsingal. \n";
                        
                        break;
                        }

                        case 12: {
                        cout << "You have chosen the municipality of Nagbukel. \n";
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Narvacan. \n";
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Quirino. \n";
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Salcedo. \n";
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of San Emilio. \n";
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of San Ildefonso. \n";
                        
                        break;
                        }               

                        case 18:{
                        cout << "You have chosen the municipality of San Juan. \n";
                        
                        break;
                        }

                        case 19: {
                        cout << "You have chosen the municipality of San Vicente. \n";
                        
                        break;
                        }

                        case 20: {
                        cout << "You have chosen the municipality of Santa. \n";
                        
                        break;
                        }

                        case 21: {
                        cout << "You have chosen the municipality of Santa Catalina. \n";
                        
                        break;
                        }

                        case 22: {
                        cout << "You have chosen the municipality of Santa Cruz. \n";
                        
                        break;
                        }

                        case 23: {
                        cout << "You have chosen the municipality of Santa Lucia. \n";
                        
                        break;
                        }

                        case 24: {
                        cout << "You have chosen the municipality of Santa Maria. \n";
                        
                        break;
                        }

                        case 25: {
                        cout << "You have chosen the municipality of Santiago. \n";
                        
                        break;
                        }

                        case 26: {
                        cout << "You have chosen the municipality of Santo Domingo. \n";
                        
                        break;
                        }

                        case 27: {
                        cout << "You have chosen the municipality of Sigay. \n";
                        
                        break;
                        }

                        case 28: {
                        cout << "You have chosen the municipality of Sinait. \n";
                        
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of Sugpon. \n";
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of Suyo. \n";
                        
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of Tagudin. \n";
                        
                        break;
                        }

                        default:{
                        break;
                        }
	                    }
	                    }
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
                            char citybarangays;
                            cout << "Here are all the Cities in La Union: " << endl;
                            cout << "San Fernando - Capital City and the Regional Center";

                            cout << "Would you like to find out more about San Fernando and the barangays within it? (Y/N): ";
                            cin >> citybarangays;

                            if (citybarangays == 'Y' || citybarangays == 'y'){
                            cout << "Mayor: Hermenegildo A. Gualberto" << endl;
                            cout << "The City of San Fernando is a 3rd class component city. It became the 'cabecera' or provincial capital on the same day that La Union became a province in 1850. It serves as the gateway to trade and commerce to the North and the culture and heritage of Ilocandia.\n";
                            cout << "The City of San Fernando's ZIP code is 2500.\n";
                            cout << "According to the 2020 census, its population is 125,640.\n";
                            cout << "Here are all the barangays in San Fernando: " << endl;
                            }
                            }

                            else if (cmb == 'M' || cmb == 'm'){
                            char municipal;
                            cout << "Here are all the municipalities in La Union: " << endl;
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
                            cout << "Would you like to find out more about the municipalities? (Y/N): ";
                            cin >> municipal;

                            if (municipal == 'Y' || municipal == 'y'){
                            int barangays;

                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;

                            switch (barangays){
                            case 1:{
                            break;
                            }

                            case 2:{
                            break;
                            }

                            case 3:{
                            break;
                            }
                            
                            case 4:{
                            break;
                            }

                            case 5:{
                            break;
                            }

                            case 6:{
                            break;
                            }

                            case 7:{
                            break;
                            }

                            case 8:{
                            break;
                            }

                            case 9:{
                            break;
                            }

                            case 10:{
                            break;
                            }

                            case 11:{
                            break;
                            }

                            case 12:{
                            break;
                            }

                            case 13:{
                            break;
                            }
                            
                            case 14:{
                            break;
                            }

                            case 15:{
                            break;
                            }

                            case 16:{
                            break;
                            }

                            case 17:{
                            break;
                            }

                            case 18:{
                            break;
                            }

                            case 19:{
                            break;
                            }

                            default:{
                            cout << "There are only 19 municipalities in La Union.\n";
                            }

                            }
                            }
                            }

                    }
                    else if (ilocos == 4){
                        cout << "You have chosen Pangasinan." << endl;
                        cout << "Pangasinan has a total population of 3,163,190 as of 2020." << endl;
                        cout << "Its are ais 5,490.59 in kilometer squared." << endl;
                        cout << "It has 4 cities, 44 municipalities, and 1,364 barangays." << endl;
                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                            if (cmb == 'C' || cmb == 'c') {
                            char citybarangays;
                            cout << "Here are all the Cities in Pangasinan: " << endl;
                            cout << "1. Alaminos\n";
                            cout << "2. Dagupan\n";
                            cout << "3. San Carlos\n";
                            cout << "4. Urdaneta\n";

                            cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                            cin >> citybarangays;

                            if (citybarangays == 'Y' || citybarangays == 'y'){
                            int barangays;
                            cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                            cin >> barangays;

                            switch (barangays){
                            case 1: {
                            cout << "You have chosen Alaminos.\n";
                            cout << "Mayor: Arthur del Fierro Celeste\n";
                            cout << "The City of Alaminos is a 4th class component city. It is known for the world-renowned Hundred Islands National Park which is composed of 124 islands, the Cuenco Cave, Pilgrimage Island, Children's Island, and Bolo Beach.\n";
                            cout << "The City of Alaminos' ZIP code is 2404.\n";
                            cout << "According to the 2020 census, its total population is 99,397.\n";
                            cout << "Here are all the barangays in Alaminos:\n";
                            cout << "1. Alos\n";
                            cout << "2. Amandiego\n";
                            cout << "3. Amangbangan\n";
                            cout << "4. Balangobong\n";
                            cout << "5. Balayang\n";
                            cout << "6. Baleyadaan\n";
                            cout << "7. Bisocol\n";
                            cout << "8. Bolaney\n";
                            cout << "9. Bued\n";
                            cout << "10. Cabatuan\n";
                            cout << "11. Cayucay\n";
                            cout << "12. Dulacac\n";
                            cout << "13. Inerangan\n";
                            cout << "14. Landoc\n";
                            cout << "15. Linmansangan\n";
                            cout << "16. Lucap\n";
                            cout << "17. Maawi\n";
                            cout << "18. Macatiw\n";
                            cout << "19. Magsaysay\n";
                            cout << "20. Mona\n";
                            cout << "21. Palamis\n";
                            cout << "22. Pandan\n";
                            cout << "23. Pangapisan\n";
                            cout << "24. Poblacion\n";
                            cout << "25. Pocalpocal\n";
                            cout << "26. Pogo\n";
                            cout << "27. Polo\n";
                            cout << "28. Quibuar\n";
                            cout << "29. Sabangan\n";
                            cout << "30. San Antonio\n";
                            cout << "31. San Jose\n";
                            cout << "32. San Roque\n";
                            cout << "33. San Vicente\n";
                            cout << "34. Santa Maria\n";
                            cout << "35. Tanaytay\n";
                            cout << "36. Tangcarang\n";
                            cout << "37. Tawintawin\n";
                            cout << "38. Telbang\n";
                            cout << "39. Victoria\n";
                            break;
                            }

                            case 2: {
                            cout << "You have chosen of Dagupan.\n";
                            cout << "Mayor: Belen T. Fernandez\n";
                            cout << "The City of Dagupan is a 1st class independent component city located in the province of Pangasinan. It is known as the Bangus Capital of the Philippines and it is a major commercial and financial center north of Manila.\n";
                            cout << "The City of Dagupan's ZIP code is 2400.\n";
                            cout << "According to the 2020 census, its total population is 174,302.\n";
                            cout << "Here are all the barangays in Dagupan:\n";
                            cout << "1. Bacayao Norte\n";
                            cout << "2. Bacayao Sur\n";
                            cout << "3. Barangay I\n";
                            cout << "4. Barangay II\n";
                            cout << "5. Barangay IV\n";
                            cout << "6. Bolosan\n";
                            cout << "7. Bonuan Binloc\n";
                            cout << "8. Bonuan Boquig\n";
                            cout << "9. Bonuan Gueset\n";
                            cout << "10. Calmay\n";
                            cout << "11. Carael\n";
                            cout << "12. Caranglaan\n";
                            cout << "13. Herrero\n";
                            cout << "14. Lasip Chico\n";
                            cout << "15. Lasip Grande\n";
                            cout << "16. Lomboy\n";
                            cout << "17. Lucao\n";
                            cout << "18. Malued\n";
                            cout << "19. Mamalingling\n";
                            cout << "20. Mangin\n";
                            cout << "21. Mayombo\n";
                            cout << "22. Pantal\n";
                            cout << "23. Poblacion Oeste\n";
                            cout << "24. Pogo Chico\n";
                            cout << "25. Pogo Grande\n";
                            cout << "26. Pugaro Suit\n";
                            cout << "27. Salapingao\n";
                            cout << "28. Salisay\n";
                            cout << "29. Tambac\n";
                            cout << "30. Tapuac\n";
                            cout << "31. Tebeng\n";
                            break;
                            }
                            
                            case 3:{
                            cout << "You have chosen San Carlos.\n";
                            cout << "Mayor: Julier Resuello\n";
                            cout << "The City of San Carlos is a 3rd class component city and it is a major trading center of bamboo and the best producer of carabao mangoes.\n";
                            cout << "The City of San Carlos' ZIP code is 2420.\n";
                            cout << "According to the 2020 census, its total population is 205,424.\n";
                            cout << "Here are all the barangays in San Carlos:\n";
                            cout << "1. Abanon\n";
                            cout << "2. Agdao\n";
                            cout << "3. Anando\n";
                            cout << "4. Ano\n";
                            cout << "5. Antipangol\n";
                            cout << "6. Aponit\n";
                            cout << "7. Bacnar\n";
                            cout << "8. Balaya\n";
                            cout << "9. Balayong\n";
                            cout << "10. Baldog\n";
                            cout << "11. Balite Sur\n";
                            cout << "12. Balococ\n";
                            cout << "13. Bani\n";
                            cout << "14. Bega\n";
                            cout << "15. Bocboc\n";
                            cout << "16. Bogaoan\n";
                            cout << "17. Bolingit\n";
                            cout << "18. Bolosan\n";
                            cout << "19. Bonifacio\n";
                            cout << "20. Buenglat\n";
                            cout << "21. Bugallon-Posadas Street\n";
                            cout << "22. Burgos Padlan\n";
                            cout << "23. Cacaritan\n";
                            cout << "24. Caingal\n";
                            cout << "25. Calobaoan\n";
                            cout << "26. Calomboyan\n";
                            cout << "27. Caoayan-Kiling\n";
                            cout << "28. Capataan\n";
                            cout << "29. Cobol\n";
                            cout << "30. Coliling\n";
                            cout << "31. Cruz\n";
                            cout << "32. Doyong\n";
                            cout << "33. Gamata\n";
                            cout << "34. Guelew\n";
                            cout << "35. Ilang\n";
                            cout << "36. Inerangan\n";
                            cout << "37. Isla\n";
                            cout << "38. Libas\n";
                            cout << "39. Lilimasan\n";
                            cout << "40. Longos\n";
                            cout << "41. Lucban\n";
                            cout << "42. M. Soriano\n";
                            cout << "43. Mabalbalino\n";
                            cout << "44. Mabini\n";
                            cout << "45. Magtaking\n";
                            cout << "46. Malacañang\n";
                            cout << "47. Maliwara\n";
                            cout << "48. Mamarlao\n";
                            cout << "49. Manzon\n";
                            cout << "50. Matagdem\n";
                            cout << "51. Mestizo Norte\n";
                            cout << "52. Naguilayan\n";
                            cout << "53. Nilentap\n";
                            cout << "54. Padilla-Gomez\n";
                            cout << "55. Pagal\n";
                            cout << "56. Paitan-Panoypoy\n";
                            cout << "57. Palaming\n";
                            cout << "58. Palaris\n";
                            cout << "59. Palospos\n";
                            cout << "60. Pangalangan\n";
                            cout << "61. Pangoloan\n";
                            cout << "62. Pangpang\n";
                            cout << "63. Parayao\n";
                            cout << "64. Payapa\n";
                            cout << "65. Payar\n";
                            cout << "66. Perez Boulevard\n";
                            cout << "67. PNR Station Site\n";
                            cout << "68. Polo\n";
                            cout << "69. Quezon Boulevard\n";
                            cout << "70. Quintong\n";
                            cout << "71. Rizal\n";
                            cout << "72. Roxas Boulevard\n";
                            cout << "73. Salinap\n";
                            cout << "74. San Juan\n";
                            cout << "75. San Pedro-Taloy\n";
                            cout << "76. Sapinit\n";
                            cout << "77. Supo\n";
                            cout << "78. Talang\n";
                            cout << "79. Tamayo\n";
                            cout << "80. Tandang Sora\n";
                            cout << "81. Tandoc\n";
                            cout << "82. Tarece\n";
                            cout << "83. Tarectec\n";
                            cout << "84. Tayambani\n";
                            cout << "85. Tebag\n";
                            cout << "86. Turac\n";
                            break;
                            }

                            case 4:{
                            cout << "You have chosen Urdaneta.\n";
                            cout << "Mayor: Julio Parayno III\n";
                            cout << "The City of Urdaneta is a 2nd class component city and it is among the region's cleanest, greenest, and most livable cities. It is a trading hub of Pangasinan and such, there is a 'BAGSAKAN' or trading post for most fruits and vegetables.\n";
                            cout << "The City of Urdaneta's ZIP code is 2428.\n";
                            cout << "According to the 2020 census, its total population is 144,577.\n";
                            cout << "Here are all the barangays in Urdaneta:\n";
                            cout << "1. Anonas\n";
                            cout << "2. Bactad East\n";
                            cout << "3. Bayaoas\n";
                            cout << "4. Bolaoen\n";
                            cout << "5. Cabaruan\n";
                            cout << "6. Cabuloan\n";
                            cout << "7. Camanang\n";
                            cout << "8. Camantiles\n";
                            cout << "9. Casantaan\n";
                            cout << "10. Catablan\n";
                            cout << "11. Cayambanan\n";
                            cout << "12. Consolacion\n";
                            cout << "13. Dilan Paurido\n";
                            cout << "14. Dr. Pedro T. Orata\n";
                            cout << "15. Labit Proper\n";
                            cout << "16. Labit West\n";
                            cout << "17. Mabanogbog\n";
                            cout << "18. Macalong\n";
                            cout << "19. Nancalobasaan\n";
                            cout << "20. Nancamaliran East\n";
                            cout << "21. Nancamaliran West\n";
                            cout << "22. Nancayasan\n";
                            cout << "23. Oltama\n";
                            cout << "24. Palina East\n";
                            cout << "25. Palina West\n";
                            cout << "26. Pinmaludpod\n";
                            cout << "27. Poblacion\n";
                            cout << "28. San Jose\n";
                            cout << "29. San Vicente\n";
                            cout << "30. Santa Lucia\n";
                            cout << "31. Santo Domingo\n";
                            cout << "32. Sugcong\n";
                            cout << "33. Tipuso\n";
                            cout << "34. Tulong\n";
                            break;
                            }

                            default:{
                            cout << "There are only 4 cities. Invalid input.\n";
                        
                            }
                            }
                            }
                            }

                            else if (cmb == 'M' || cmb == 'm'){
                            char municipal;
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
                            cout << "21. Lingayen - Capital of Pangasinan\n";
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
                            cout << "Would you like to find out more about the municipalities? (Y/N): ";
                            cin >> municipal;
                            
	                        if (municipal == 'Y' || municipal == 'y'){
	                        int barangays;
                                
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                 
                            switch (barangays){
                            case 1: {
                            cout << "1. You have chosen the municipality of Agno.\n";
                            
                            break;
                            }

                            case 2: {
                            cout << "1. You have chosen the municipality of Aguilar.\n";
                            
                            break;
                            }

                            case 3:{
                            cout << "1. You have chosen the municipality of Alcala.\n";
                            
                            break;
                            }

                            case 4:{
                            cout << "1. You have chosen the municipality of Anda.\n";
                            
                            break;
                            }

                            case 5:{
                            cout << "1. You have chosen the municipality of Asingan.\n";
                            
                            break;
                            }

                            case 6:{
                            cout << "1. You have chosen the municipality of Balungao.\n";
                            
                            break;
                            }

                            case 7:{
                            cout << "1. You have chosen the municipality of Bani.\n";
                            
                            break;
                            }

                            case 8:{
                            cout << "1. You have chosen the municipality of Basista.\n";
                            
                            break;
                            }

                            case 9:{
                            cout << "1. You have chosen the municipality of Bautista.\n";
                            
                            break;
                            }

                            case 10:{
                            cout << "1. You have chosen the municipality of Bayambang.\n";
                            
                            break;
                            }

                            case 11:{
                            cout << "1. You have chosen the municipality of Binalonan.\n";
                            
                            break;
                            }

                            case 12:{
                            cout << "1. You have chosen the municipality of Binmaley.\n";
                            
                            break;
                            }

                            case 13:{
                            cout << "1. You have chosen the municipality of Bolinao.\n";
                            
                            break;
                            }

                            case 14:{
                            cout << "1. You have chosen the municipality of Bugallon.\n";
                            
                            break;
                            }

                            case 15:{
                            cout << "1. You have chosen the municipality of Burgos.\n";
                            
                            break;
                            }

                            case 16:{
                            cout << "1. You have chosen the municipality of Calasiao.\n";
                            
                            break;
                            }

                            case 17:{
                            cout << "1. You have chosen the municipality of Dasol.\n";
                            
                            break;
                            }

                            case 18:{
                            cout << "1. You have chosen the municipality of Infanta.\n";
                            
                            break;
                            }

                            case 19:{
                            cout << "1. You have chosen the municipality of Labrador\n";
                            
                            break;
                            }

                            case 20:{
                            cout << "1. You have chosen the municipality of Laoac.\n";
                            
                            break;
                            }

                            case 21:{
                            cout << "1. You have chosen the municipality of Lingayen.\n";
                            
                            break;
                            }

                            case 22:{
                            cout << "1. You have chosen the municipality of Mabini.\n";
                            
                            break;
                            }

                            case 23:{
                            cout << "1. You have chosen the municipality of Malasiqui.\n";
                            
                            break;
                            }

                            case 24:{
                            cout << "1. You have chosen the municipality of Manaoag.\n";
                            
                            break;
                            }

                            case 25:{
                            cout << "1. You have chosen the municipality of Mangaldan.\n";
                            
                            break;
                            }

                            case 26:{
                            cout << "1. You have chosen the municipality of Mangatarem.\n";
                            
                            break;
                            }

                            case 27:{
                            cout << "1. You have chosen the municipality of Mapandan\n";
                            
                            break;
                            }

                            case 28:{
                            cout << "1. You have chosen the municipality of Natividad.\n";
                            
                            break;
                            }

                            case 29:{
                            cout << "1. You have chosen the municipality of Pozorrubio.\n";
                            
                            break;
                            }

                            case 30:{
                            cout << "1. You have chosen the municipality of Rosales.\n";
                            
                            break;
                            }

                            case 31:{
                            cout << "1. You have chosen the municipality of San Fabian.\n";
                            
                            break;
                            }

                            case 32:{
                            cout << "1. You have chosen the municipality of San Jacinto.\n";
                            
                            break;
                            }

                            case 33:{
                            cout << "1. You have chosen the municipality of San Manuel.\n";
                            
                            break;
                            }

                            case 34:{
                            cout << "1. You have chosen the municipality of San Nicolas.\n";
                            
                            break;
                            }

                            case 35:{
                            cout << "1. You have chosen the municipality of San Quintin.\n";
                            
                            break;
                            }

                            case 36:{
                            cout << "1. You have chosen the municipality of Santa Barbara.\n";
                            
                            break;
                            }

                            case 37:{
                            cout << "1. You have chosen the municipality of Santa Maria.\n";
                            
                            break;
                            }

                            case 38:{
                            cout << "1. You have chosen the municipality of Santo Tomas.\n";
                            
                            break;
                            }

                            case 39:{
                            cout << "1. You have chosen the municipality of Sison.\n";
                            
                            break;
                            }

                            case 40:{
                            cout << "1. You have chosen the municipality of Sual.\n";
                            
                            break;
                            }

                            case 41:{
                            cout << "1. You have chosen the municipality of Tayug.\n";
                            
                            break;
                            }

                            case 42:{
                            cout << "1. You have chosen the municipality of Umingan.\n";
                            
                            break;
                            }

                            case 43:{
                            cout << "1. You have chosen the municipality of Urbiztondo.\n";
                            
                            break;
                            }

                            case 44:{
                            cout << "1. You have chosen the municipality of Villasis.\n";
                            
                            break;
                            }
                            
                            default:{
                            cout << "There are only 44 municipalities in Pangasinan.\n";
                            }
	                            }

	                        }

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
                        
                        cout << "Batanes has no cities, would you like to find out about the municipalities? (Y/N): ";
                        cin >> cmb;

                            if(cmb == 'Y' || cmb == 'y'){
                            char municipal;
                            cout << "Here are all the municipalities in Batanes: " << endl;
                            cout << "1. Basco - Capital of Batanes.\n";
                            cout << "2. Itbayat\n";
                            cout << "3. Ivana\n";
                            cout << "4. Mahatao\n";
                            cout << "5. Sabtang\n";
                            cout << "6. Uyugan\n";
                        
                            cout << "Would you like to find out more about the municipalities? (Y/N): ";
                            cin >> municipal;
                            
	                        if (municipal == 'Y' || municipal == 'y'){
	                        int barangays;
                                
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                 
                            switch (barangays){
                            case 1:{
                            
                            break;
                            }

                            case 2:{
                            
                            break;
                            }

                            case 3:{
                            
                            break;
                            }

                            case 4:{
                            
                            break;
                            }

                            case 5:{
                            
                            break;
                            }

                            case 6:{
                            
                            break;
                            }

	                        }
	                        }
                            }

                    }
                    else if (cagayan == 2){
                        cout << "You have chosen Cagayan." << endl;

                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                            if(cmb == 'C' || cmb == 'c'){
                            char citybarangays;
                            cout << "Here are all the cities in Cagayan: " << endl;
                            cout << "Tuguegarao - Capital of Cagayan and Regional Center of Cagayan Valley\n";

                            cout << "Would you like to find out more about the cities and the barangays within Tuguegarao? (Y/N): ";
                            cin >> citybarangays;

                            if (citybarangays == 'Y' || citybarangays == 'y'){
                            cout << "Mayor: Maila Rosario S. Ting-Que\n";
                            cout << "The City of Tuguegarao is a 1st class component city and the capital of Cagayan as well as its regional center and regional institutional and administrative center. It has earned the distinction of being the Center of Excellence for Higher Education, Science, and Medicine in Region II. \n";
                            cout << "The City of Tuguegarao's ZIP code is 3500.\n";
                            cout << "According to the 2020 census, its total population is 166,334.\n";
                            cout << "Here are all the barangays in Tuguegarao: \n";
                            cout << "1. Annafunan East\n";
                            cout << "2. Annafunan West\n";
                            cout << "3. Atulayan Norte\n";
                            cout << "4. Atulayan Sur\n";
                            cout << "5. Bagay\n";
                            cout << "6. Buntun\n";
                            cout << "7. Caggay\n";
                            cout << "8. Capatan\n";
                            cout << "9. Carig\n";
                            cout << "10. Caritan Centro\n";
                            cout << "11. Caritan Norte\n";
                            cout << "12. Caritan Sur\n";
                            cout << "13. Cataggaman Nuevo\n";
                            cout << "14. Cataggaman Pardo\n";
                            cout << "15. Cataggaman Viejo\n";
                            cout << "16. Centro 1\n";
                            cout << "17. Centro 10\n";
                            cout << "18. Centro 11\n";
                            cout << "19. Centro 12\n";
                            cout << "20. Centro 2\n";
                            cout << "21. Centro 3\n";
                            cout << "22. Centro 4\n";
                            cout << "23. Centro 5\n";
                            cout << "24. Centro 6\n";
                            cout << "25. Centro 7\n";
                            cout << "26. Centro 8\n";
                            cout << "27. Centro 9\n";
                            cout << "28. Dadda\n";
                            cout << "29. Gosi Norte\n";
                            cout << "30. Gosi Sur\n";
                            cout << "31. Larion Alto\n";
                            cout << "32. Larion Bajo\n";
                            cout << "33. Leonarda\n";
                            cout << "34. Libag Norte\n";
                            cout << "35. Libag Sur\n";
                            cout << "36. Linao East\n";
                            cout << "37. Linao Norte\n";
                            cout << "38. Linao West\n";
                            cout << "39. Nambbalan Norte\n";
                            cout << "40. Nambbalan Sur\n";
                            cout << "41. Pallua Norte\n";
                            cout << "42. Pallua Sur\n";
                            cout << "43. Pengue\n";
                            cout << "44. Reyes\n";
                            cout << "45. San Gabriel\n";
                            cout << "46. Tagga\n";
                            cout << "47. Tanza\n";
                            cout << "48. Ugac Norte\n";
                            cout << "49. Ugac Sur\n";
                            }

                            }

                            else if(cmb == 'M' || cmb == 'm'){
                            char municipal;
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

                            cout << "Would you like to find out more about the municipalities? (Y/N): ";
                            cin >> municipal;
                            
	                        if (municipal == 'Y' || municipal == 'y'){
	                        int barangays;
                                
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                 
                            switch (barangays){
                            case 1:{
                            cout << "1. You have chosen the municipality of Abulug.\n";
                            
                            break;
                            }

                            case 2:{
                            cout << "1. You have chosen the municipality of Alcala.\n";
                            
                            break;
                            }

                            case 3:{
                            cout << "1. You have chosen the municipality of Allacapan.\n";
                            
                            break;
                            }

                            case 4:{
                            cout << "1. You have chosen the municipality of Amulung.\n";
                            
                            break;
                            }

                            case 5:{
                            cout << "1. You have chosen the municipality of Aparri.\n";
                            
                            break;
                            }

                            case 6:{
                            cout << "1. You have chosen the municipality of Baggao.\n";
                            
                            break;
                            }

                            case 7:{
                            cout << "1. You have chosen the municipality of Ballesteros.\n";
                            
                            break;
                            }

                            case 8:{
                            cout << "1. You have chosen the municipality of Buguey.\n";
                            
                            break;
                            }

                            case 9:{
                            cout << "1. You have chosen the municipality of Calayan.\n";
                            
                            break;
                            }

                            case 10:{
                            cout << "1. You have chosen the municipality of Camalaniugan.\n";
                            
                            break;
                            }

                            case 11:{
                            cout << "1. You have chosen the municipality of Claveria.\n";
                            
                            break;
                            }

                            case 12:{
                            cout << "1. You have chosen the municipality of Enrile.\n";
                            
                            break;
                            }

                            case 13:{
                            cout << "1. You have chosen the municipality of Gattaran.\n";
                            
                            break;
                            }

                            case 14:{
                            cout << "1. You have chosen the municipality of Gonzaga.\n";
                            
                            break;
                            }

                            case 15:{
                            cout << "1. You have chosen the municipality of Iguig.\n";
                            
                            break;
                            }

                            case 16:{
                            cout << "1. You have chosen the municipality of Lal-lo.\n";
                            
                            break;
                            }

                            case 17:{
                            cout << "1. You have chosen the municipality of Lasam.\n";
                            
                            break;
                            }
                            
                            case 18:{
                            cout << "1. You have chosen the municipality of Pamplona.\n";
                            
                            break;
                            }

                            case 19:{
                            cout << "1. You have chosen the municipality of Peñablanca.\n";
                            
                            break;
                            }

                            case 20:{
                            cout << "1. You have chosen the municipality of Piat.\n";
                            
                            break;
                            }
                            
                            case 21:{
                            cout << "1. You have chosen the municipality of Rizal.\n";
                            
                            break;
                            }

                            case 22:{
                            cout << "1. You have chosen the municipality of Sanchez-Mira.\n";
                            
                            break;
                            }

                            case 23:{
                            cout << "1. You have chosen the municipality of Santa Ana.\n";
                            
                            break;
                            }

                            case 24:{
                            cout << "1. You have chosen the municipality of Santa Praxedes.\n";
                            
                            break;
                            }

                            case 25:{
                            cout << "1. You have chosen the municipality of Santa Teresita.\n";
                            
                            break;
                            }

                            case 26:{
                            cout << "1. You have chosen the municipality of Santo Niño.\n";
                            
                            break;
                            }

                            case 27:{
                            cout << "1. You have chosen the municipality of Solana.\n";
                            
                            break;
                            }

                            case 28:{
                            cout << "1. You have chosen the municipality of Tuao.\n";
                            
                            break;
                            }

                            default:{
                            cout << "There are only 28 municipalities in Cagayan.";
                            }
	                        }
	                        }

                            }//MUNICIPALITIES


                    }
                    else if (cagayan == 3){
                        cout << "You have chosen Isabela: ";

                        cout << "Would you like to find out about the cities or municipalities? Choose from C or M. Type N to find out about other regions: ";
                        cin >> cmb;

                        if(cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the Cities in Isabela: " << endl;
                        cout << "1. Cauayan\n";
                        cout << "2. Ilagan - Capital\n";
                        cout << "3. Santiago\n";
                        
                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){//SWITCHCITYOFISABELA
                        case 1:{
                        cout << "You have chosen the city of Cauayan.\n";
                        cout << "Mayor: Caesar 'Jaycee' Dy Jr.\n";
                        cout << "The City of Cauayan is a 2nd class component city. Isabela is home to Magat High Rise Dam and Tourism Complex known to be the highest and biggest dam in Asia at the time of its construction. Isabela comprises an aggregate land area of 10,665 square kilometers, representing almost 40 percent of the regional territory.\n";
                        cout << "The City of Cauayan's ZIP code is 3305.\n";
                        cout << "According to the 2020 census, its total population is 143,403.\n";
                        cout << "Here are all the barangays in Cauayan: \n";
                        cout << "1. Alicaocao\n";
                        cout << "2. Alinam\n";
                        cout << "3. Amobocan\n";
                        cout << "4. Andarayan\n";
                        cout << "5. Baculod\n";
                        cout << "6. Baringin Norte\n";
                        cout << "7. Baringin Sur\n";
                        cout << "8. Buena Suerte\n";
                        cout << "9. Bugallon\n";
                        cout << "10. Buyon\n";
                        cout << "11. Cabaruan\n";
                        cout << "12. Cabugao\n";
                        cout << "13. Carabatan Bacareno\n";
                        cout << "14. Carabatan Chica\n";
                        cout << "15. Carabatan Grande\n";
                        cout << "16. Carabatan Punta\n";
                        cout << "17. Casalatan\n";
                        cout << "18. Cassap Fuera\n";
                        cout << "19. Catalina\n";
                        cout << "20. Culalabat\n";
                        cout << "21. Dabburab\n";
                        cout << "22. De Vera\n";
                        cout << "23. Dianao\n";
                        cout << "24. Disimuray\n";
                        cout << "25. District I\n";
                        cout << "26. District II\n";
                        cout << "27. District III\n";
                        cout << "28. Duminit\n";
                        cout << "29. Faustino\n";
                        cout << "30. Gagabutan\n";
                        cout << "31. Gappal\n";
                        cout << "32. Guayabal\n";
                        cout << "33. Labinab\n";
                        cout << "34. Linglingay\n";
                        cout << "35. Mabantad\n";
                        cout << "36. Maligaya\n";
                        cout << "37. Manaoag\n";
                        cout << "38. Marabulig I\n";
                        cout << "39. Marabulig II\n";
                        cout << "40. Minante I\n";
                        cout << "41. Minante II\n";
                        cout << "42. Naganacan\n";
                        cout << "43. Nagcampegan\n";
                        cout << "44. Nagrumbuan\n";
                        cout << "45. Nungnungan I\n";
                        cout << "46. Nungnungan II\n";
                        cout << "47. Pinoma\n";
                        cout << "48. Rizal\n";
                        cout << "49. Rogus\n";
                        cout << "50. San Antonio\n";
                        cout << "51. San Fermin\n";
                        cout << "52. San Francisco\n";
                        cout << "53. San Isidro\n";
                        cout << "54. San Luis\n";
                        cout << "55. San Pablo\n";
                        cout << "56. Santa Luciana\n";
                        cout << "57. Santa Maria\n";
                        cout << "58. Sillawit\n";
                        cout << "59. Sinippil\n";
                        cout << "60. Tagaran\n";
                        cout << "61. Turayong\n";
                        cout << "62. Union\n";
                        cout << "63. Villa Concepcion\n";
                        cout << "64. Villa Luna\n";
                        cout << "65. Villaflor\n";
                        break;
                        }
                        
                        case 2:{
                        cout << "You have chosen the city of Ilagan.\n";
                        cout << "Mayor: Evelyn C. Diaz.\n";
                        cout << "The City of Ilagan is a 1st class component city and the capital of Isabela. It is also known as the Corn Capital of the Philippines, holds an ASEAN Clean Tourist City, and the safest place to conduct a sports event. \n";
                        cout << "The City of Ilagan's ZIP code is 3300.\n";
                        cout << "According to the 2020 census, its total population is 158,218.\n";
                        cout << "Here are all the barangays in Ilagan: \n";
                        cout << "1. Aggasian\n";
                        cout << "2. Alibagu\n";
                        cout << "3. Allinguigan 1st\n";
                        cout << "4. Allinguigan 2nd\n";
                        cout << "5. Allinguigan 3rd\n";
                        cout << "6. Arusip\n";
                        cout << "7. Baculod\n";
                        cout << "8. Bagong Silang\n";
                        cout << "9. Bagumbayan\n";
                        cout << "10. Baligatan\n";
                        cout << "11. Ballacong\n";
                        cout << "12. Bangag\n";
                        cout << "13. Batong-Labang\n";
                        cout << "14. Bigao\n";
                        cout << "15. Cabannungan 1st\n";
                        cout << "16. Cabannungan 2nd\n";
                        cout << "17. Cabeseria 10\n";
                        cout << "18. Cabeseria 14 and 16\n";
                        cout << "19. Cabeseria 17 and 21\n";
                        cout << "20. Cabeseria 19\n";
                        cout << "21. Cabeseria 2\n";
                        cout << "22. Cabeseria 22\n";
                        cout << "23. Cabeseria 23\n";
                        cout << "24. Cabeseria 25\n";
                        cout << "25. Cabeseria 27\n";
                        cout << "26. Cabeseria 3\n";
                        cout << "27. Cabeseria 4\n";
                        cout << "28. Cabeseria 5\n";
                        cout << "29. Cabeseria 6 & 24\n";
                        cout << "30. Cabeseria 7\n";
                        cout << "31. Cabeseria 9 and 11\n";
                        cout << "32. Cadu\n";
                        cout << "33. Calamagui 1st\n";
                        cout << "34. Calamagui 2nd\n";
                        cout << "35. Camunatan\n";
                        cout << "36. Capellan\n";
                        cout << "37. Capo\n";
                        cout << "38. Carikkikan Norte\n";
                        cout << "39. Carikkikan Sur\n";
                        cout << "40. Centro Poblacion\n";
                        cout << "41. Centro-San Antonio\n";
                        cout << "42. Fugu\n";
                        cout << "43. Fuyo\n";
                        cout << "44. Gayong-Gayong Norte\n";
                        cout << "45. Gayong-Gayong Sur\n";
                        cout << "46. Guinatan\n";
                        cout << "47. Imelda Bliss Village\n";
                        cout << "48. Lullutan\n";
                        cout << "49. Malalam\n";
                        cout << "50. Malasin\n";
                        cout << "51. Manaring\n";
                        cout << "52. Mangcuram\n";
                        cout << "53. Marana I\n";
                        cout << "54. Marana II\n";
                        cout << "55. Marana III\n";
                        cout << "56. Minabang\n";
                        cout << "57. Morado\n";
                        cout << "58. Naguilian Norte\n";
                        cout << "59. Naguilian Sur\n";
                        cout << "60. Namnama\n";
                        cout << "61. Nanaguan\n";
                        cout << "62. Osmeña\n";
                        cout << "63. Paliueg\n";
                        cout << "64. Pasa\n";
                        cout << "65. Pilar\n";
                        cout << "66. Quimalabasa\n";
                        cout << "67. Rang-ayan\n";
                        cout << "68. Rugao\n";
                        cout << "69. Salindingan\n";
                        cout << "70. San Andres\n";
                        cout << "71. San Felipe\n";
                        cout << "72. San Ignacio\n";
                        cout << "73. San Isidro\n";
                        cout << "74. San Juan\n";
                        cout << "75. San Lorenzo\n";
                        cout << "76. San Pablo\n";
                        cout << "77. San Rodrigo\n";
                        cout << "78. San Vicente\n";
                        cout << "79. Santa Barbara\n";
                        cout << "80. Santa Catalina\n";
                        cout << "81. Santa Isabel Norte\n";
                        cout << "82. Santa Isabel Sur\n";
                        cout << "83. Santa Maria\n";
                        cout << "84. Santa Victoria\n";
                        cout << "85. Santo Tomas\n";
                        cout << "86. Siffu\n";
                        cout << "87. Sindon Bayabo\n";
                        cout << "88. Sindon Maride\n";
                        cout << "89. Sipay\n";
                        cout << "90. Tangcul\n";
                        cout << "91. Villa Imelda\n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of Santiago\n";
                        cout << "Mayor: Alyssa Sheena T. Dy\n";
                        cout << "The City of Santiago is home to several business enterprises, banking institutions, educational entities, as well as manufacturing companies. It is considered as the Commercial and Industrial Center of Cagayan Valley.\n";
                        cout << "The City of Santiago's ZIP code is 3311.\n";
                        cout << "According to the 2020 census, its total population is 148,580.\n";
                        cout << "Here are all the barangays in Santiago: \n";
                        cout << "1. Abra\n";
                        cout << "2. Ambalatungan\n";
                        cout << "3. Balintocatoc\n";
                        cout << "4. Baluarte\n";
                        cout << "5. Bannawag Norte\n";
                        cout << "6. Batal\n";
                        cout << "7. Buenavista\n";
                        cout << "8. Cabulay\n";
                        cout << "9. Calao East\n";
                        cout << "10. Calao West\n";
                        cout << "11. Calaocan\n";
                        cout << "12. Centro East\n";
                        cout << "13. Centro West\n";
                        cout << "14. Divisoria\n";
                        cout << "15. Dubinan East\n";
                        cout << "16. Dubinan West\n";
                        cout << "17. Luna\n";
                        cout << "18. Mabini\n";
                        cout << "19. Malvar\n";
                        cout << "20. Nabbuan\n";
                        cout << "21. Naggasican\n";
                        cout << "22. Patul\n";
                        cout << "23. Plaridel\n";
                        cout << "24. Rizal\n";
                        cout << "25. Rosario\n";
                        cout << "26. Sagana\n";
                        cout << "27. Salvador\n";
                        cout << "28. San Andres\n";
                        cout << "29. San Isidro\n";
                        cout << "30. San Jose\n";
                        cout << "31. Santa Rosa\n";
                        cout << "32. Sinili\n";
                        cout << "33. Sinsayon\n";
                        cout << "34. Victory Norte\n";
                        cout << "35. Victory Sur\n";
                        cout << "36. Villa Gonzaga\n";
                        cout << "37. Villasis\n";
                        break;
                        }

                        default:{
                        
                        break;
                        }
                        }
                        }
                        }//CITIESISABELA

                        else if(cmb == 'M' || cmb == 'm'){
                        char municipal;
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
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                 
                        switch (barangays){
                        case 1:{
	                    cout << "You have chosen the municipality of Alicia.\n";
	                    
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of Angadanan.\n";
	                    
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of Aurora.\n";
	                    
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of Benito Soliven.\n";
	                    
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of Burgos.\n";
	                    
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of Cabagan.\n";
	                    
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of Cabatuan.\n";
	                    
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of Cordon.\n";
	                    
	                    break;
	                    }

                        case 9:{
	                    cout << "You have chosen the municipality of Delfin Albano.\n";
	                    
	                    break;
	                    }

                        case 10:{
	                    cout << "You have chosen the municipality of Dinapigue.\n";
	                    
	                    break;
	                    }

                        case 11:{
	                    cout << "You have chosen the municipality of Echague.\n";
	                    
	                    break;
	                    }

                        case 12:{
	                    cout << "You have chosen the municipality of Gamu.\n";
	                    
	                    break;
	                    }

                        case 13:{
	                    cout << "You have chosen the municipality of Jones.\n";
	                    
	                    break;
	                    }

                        case 14:{
	                    cout << "You have chosen the municipality of Luna.\n";
	                    
	                    break;
	                    }

                        case 15:{
	                    cout << "You have chosen the municipality of Maconacon.\n";
	                    
	                    break;
	                    }

                        case 16:{
	                    cout << "You have chosen the municipality of Mailig.\n";
	                    
	                    break;
	                    }

                        case 17:{
	                    cout << "You have chosen the municipality of Naguilian.\n";
	                    
	                    break;
	                    }

                        case 18:{
	                    cout << "You have chosen the municipality of Palanan.\n";
	                    
	                    break;
	                    }

                        case 19:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 20:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 21:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 22:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 23:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 24:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 25:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 26:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 27:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 28:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 29:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 30:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 31:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 32:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 33:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        default:{
                        break;
                        }
	                    }
	                    }
                        }

                    }
                    else if (cagayan == 4){
                        cout << "You have chosen Nueva Viscaya: " << endl;

                        cout << "Nueva Viscaya does not have any cities. Type M to see the municipalities or N if you want to find out about other regions: ";
                        cin >> cmb;

                        if(cmb == 'M' || cmb == 'm'){
                        char municipal;
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
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }
                        
                        case 3:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 9:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 10:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 11:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 12:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 13:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 14:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 15:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        default:{
                        break;
                        }
	                    }
	                    }
                        }//MUNICIPALITIESOFNUEVAVISCAYA
                    }
                    else if (cagayan == 5){
                        cout << "You have chosen Quirino: " << endl;

                        cout << "Quirino does not have any cities. Type M to find out about the municipalities or type N to find out about other regions: ";
                        cin >> cmb;

                        if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Quirino: " << endl;
                        cout << "1. Aglipay\n";
                        cout << "2. Cabarroguis\n";
                        cout << "3. Diffun\n";
                        cout << "4. Maddela\n";
                        cout << "5. Nagtipunan\n";
                        cout << "6. Sagudav\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        default:{
                        break;
                        }
	                    }
	                    }

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

                    cout << "Aurora does not have any cities. Type M to find out more about the municipalities or type N to find out about other regions: ";
                    cin >> cmb;

                       if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Aurora: " << endl;
                        cout << "1. Baler - Capital\n";
                        cout << "2. Casiguran\n";
                        cout << "3. Dilasag\n";
                        cout << "4. Dinalungan\n";
                        cout << "5. Dingalan\n";
                        cout << "6. Dipaculao\n";
                        cout << "7. Maria Aurora\n";
                        cout << "8. San Luis\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        default:{
                        break;
                        }
	                    }
	                    }
                        }//MUNICIPALITIESAURORA
                    }

                    else if (centrall == 2){
                    cout << "You have chosen Bataan." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Bataan: " << endl;
                        cout << "Balanga - Capital of Bataan\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }
                        
                        case 9:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 10:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        case 11:{
	                    cout << "You have chosen the municipality of \n";
	                    cout << "Total population in municipality \n";
	                    cout << "Here are all the barangays in \n";
	                    break;
	                    }

                        default:{
                        break;
                        }
	                    }
	                    }
                        }

                    }

                    else if (centrall == 3){
                    cout << "You have chosen Bulacan." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Bulacan: " << endl;
                        cout << "1. Meycauayan\n";
                        cout << "2. San Jose del Monte\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (centrall == 4){
                    cout << "You have chosen Nueva Ecija." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Nueva Ecija: " << endl;
                        cout << "1. Cabanatuan\n";
                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }

                        }
                        }
                        }

                    }
                    
                    else if (centrall == 5){
                    cout << "You have chosen Pampanga." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Pampanga: " << endl;
                        cout << "Angeles - Highly Urbanized City and is thus considered independent.\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (centrall == 6){
                    cout << "You have chosen Tarlac." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Tarlac: " << endl;
                        cout << "Tarlac City - Capital\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (centrall == 7){
                    cout << "You have chosen Zambales." << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Zambales: " << endl;
                        cout << "Olongapo - Highly Urbanized City and is thus considered independent.\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        default:{
                        break;
                        }
                        }
                        }
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
                        char citybarangays;
                        cout << "Here are all the cities in Batangas: " << endl;
                        cout << "1. Batangas City - Capital of Batangas\n";
                        cout << "2. Lipa\n";
                        cout << "3. Santo Tomas\n";
                        cout << "4. Tanauan\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (calabarzon == 2){
                    cout << "You have chosen Cavite. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Cavite: " << endl;
                        cout << "1. Bacoor\n";
                        cout << "2. Cavite City\n";
                        cout << "3. Dasmariñas\n";
                        cout << "4. General Trias\n";
                        cout << "5. Imus - Capital of Cavite\n";
                        cout << "6. Tagaytay\n";
                        cout << "7. Trece Martires\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }    
                    }

                    else if (calabarzon == 3){
                    cout << "You have chosen Laguna. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Laguna: " << endl;
                        cout << "1. Biñan\n";
                        cout << "2. Cabuyao\n";
                        cout << "3. Calamba - Regional Center of CALABARZON\n";
                        cout << "4. San Pablo\n";
                        cout << "5. San Pedro\n";
                        cout << "6. Santa Rosa\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }

                        }
                        }
                        }
                    }

                    else if (calabarzon == 4){
                    cout << "You have chosen Quezon. " << endl;

                    cout << "Would you like to find out about the cities, municipalities, or the barangays? Choose from C, M or B or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Quezon: " << endl;
                        cout << "1. Lucena City - Highly Urbanized City\n";
                        cout << "2. Tayabas\n";
                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (calabarzon == 5){
                    cout << "You have chosen Rizal. " << endl;    

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Rizal: " << endl;
                        cout << "Antipolo - Capital of Rizal\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
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

                    cout << "Marinduque has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                       if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Marinduque:" << endl;
                        cout << "1. Boac - Capital of Marinduque\n";
                        cout << "2. Buenavista\n";
                        cout << "3. Gasan\n";
                        cout << "4. Mogpog\n";
                        cout << "5. Santa Cruz\n";
                        cout << "6. Torrijos\n";
                        
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (mimaropa == 2){
                    cout << "You have chosen Occidental Mindoro\n";

                   cout << "Occidental Mindoro has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                       if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (mimaropa == 3){
                    cout << "You have chosen Oriental Mindoro\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Oriental Mindoro:" << endl;
                        cout << "Calapan - Capital of Oriental Mindoro and Regional Center of MIMAROPA\n";
                        cout << "Would you like to find out more about Calapan and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";
                        }

                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }    
                    }

                    else if (mimaropa == 4){
                    cout << "You have chosen Palawan\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Palawan:" << endl;
                        cout << "Puerto Princesa - Highly Urbanized City and the Capital of Palawan\n";

                        cout << "Would you like to find out more about Puerto Princesa and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in Puerto Princesa:\n";

                        }
                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                    
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }    

                    }

                    else if (mimaropa == 5){
                    cout << "You have chosen Romblon\n";

                    cout << "Romblon has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){

                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
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
                        char citybarangays;
                        cout << "Here are all the cities in Albay: " << endl;
                        cout << "Legazpi - Capital of Albay and Regional Center of the Bicol Region.\n";

                        cout << "Would you like to find out more about Legazpi and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        } 
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (bicol == 2){
                    cout << "You have chosen Camarines Norte" << endl;

                    cout << "Camarines Norte has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                        
                    }

                    else if (bicol == 3){
                    cout << "You have chosen Camarines Sur" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the Cities in Camarines Sur: " << endl;
                        cout << "1. Iriga\n";
                        cout << "2. Naga\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (bicol == 4){
                    cout << "You have chosen Catanduanes" << endl;

                    cout << "Catanduanes has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                       if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }

                        }
                        }
                        }

                    }

                    else if (bicol == 5){
                    cout << "You have chosen Masbate." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Masbate\n";
                        cout << "Masbate City - Capital of Masbate.\n"; 

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (bicol == 6){
                    cout << "You have chosen Sorsogon." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Sorsogon: " << endl;
                        cout << "Sorsogon City - Capital of Sorsogon\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                       
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

	            cout << "Choose from 1-6 to find out more about the different provinces: ";
	            cin >> westernvis;

                    if (westernvis == 1){
                    cout << "You have chosen Aklan. " << endl;

                    cout << "Aklan has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (westernvis == 2){
                    cout << "You have chosen Antique";
                    
                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Antique: " << endl;
                        cout << "Bacolod - Highly Urbanized City\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (westernvis == 3){
                    cout << "You have chosen Capiz" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Capiz: " << endl;
                        cout << "Roxas City - Capital of Capiz\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";
                        }

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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
                        
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (westernvis == 4){
                    cout << "You have chosen Guimaras." << endl;

                    cout << "Guimaras has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Guimaras: " << endl;
                        cout << "1. Buenavista\n";
                        cout << "2. Jordan - Capital of Guimaras\n";
                        cout << "3. Nueva Valencia\n";
                        cout << "4. San Lorenzo\n";
                        cout << "5. Sibunag\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (westernvis == 5){
                    cout << "You have chosen Iloilo\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Iloilo: " << endl;
                        cout << "1. Passi\n";
                        cout << "2. Iloilo City - Highly Urbanized City\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. "; 
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 38:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 39:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 40:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 41:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 42:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }
                    
                    else if (westernvis == 6){
                    cout << "You have chosen Negros Occidental. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
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

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
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

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
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
                        char citybarangays;
                        cout << "Here are all the cities in Bohol: " << endl;
                        cout << "Tagbilaran - Capital of Bohol\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Bohol: " << endl;
                        cout << "1. Alburquerque\n";
                        cout << "2. Alicia\n";
                        cout << "3. Anda\n";
                        cout << "4. Antequera\n";
                        cout << "5. Baclayon\n";
                        cout << "6. Balilihan\n";
                        cout << "7. Batuan\n";
                        cout << "8. Bien Unido\n";
                        cout << "9. Bilar\n";
                        cout << "10. Buenavista\n";
                        cout << "11. Calape\n";
                        cout << "12. Candijay\n";
                        cout << "13. Carmen\n";
                        cout << "14. Catigbian\n";
                        cout << "15. Clarin\n";
                        cout << "16. Corella\n";
                        cout << "17. Cortes\n";
                        cout << "18. Dagohoy\n";
                        cout << "19. Danao\n";
                        cout << "20. Dauis\n";
                        cout << "21. Dimiao\n";
                        cout << "22. Duero\n";
                        cout << "23. Garcia Hernandez\n";
                        cout << "24. Getafe\n";
                        cout << "25. Guindulman\n";
                        cout << "26. Inabanga\n";
                        cout << "27. Jagna\n";
                        cout << "28. Lila\n";
                        cout << "29. Loay\n";
                        cout << "30. Loboc\n";
                        cout << "31. Loon\n";
                        cout << "32. Mabini\n";
                        cout << "33. Maribojoc\n";
                        cout << "34. Panglao\n";
                        cout << "35. Pilar\n";
                        cout << "36. President Carlos P. Garcia\n";
                        cout << "37. Sagbayan\n";
                        cout << "38. San Isidro\n";
                        cout << "39. San Miguel\n";
                        cout << "40. Sevilla\n";
                        cout << "41. Sierra Bullones\n";
                        cout << "42. Sikatuna\n";
                        cout << "43. Talibon\n";
                        cout << "44. Trinidad\n";
                        cout << "45. Tubigon\n";
                        cout << "46. Ubay\n";
                        cout << "47. Valencia\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 38:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 39:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 40:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 41:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 42:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 43:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 44:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 45:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 46:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 47:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
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
                        char citybarangays;
                        cout << "Here are all the cities in Negros Oriental: " << endl;
                        cout << "1. Bais\n";
                        cout << "2. Bayawan\n";
                        cout << "3. Canlaon\n";
                        cout << "4. Dumaguete - Capital of Negros Oriental\n";
                        cout << "5. Guihulngan\n";
                        cout << "6. Tanjay\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Negros Oriental: " << endl;
                        cout << "1. Amlan\n";
                        cout << "2. Ayungon\n";
                        cout << "3. Bacong\n";
                        cout << "4. Basay\n";
                        cout << "5. Bindoy\n";
                        cout << "6. Dauin\n";
                        cout << "7. Jimalalud\n";
                        cout << "8. La Libertad\n";
                        cout << "9. Mabinay\n";
                        cout << "10. Manjuyod\n";
                        cout << "11. Pamplona\n";
                        cout << "12. San Jose\n";
                        cout << "13. Santa Catalina\n";
                        cout << "14. Siaton\n";
                        cout << "15. Sibulan\n";
                        cout << "16. Tayasan\n";
                        cout << "17. Valencia\n";
                        cout << "18. Vallehermoso\n";
                        cout << "19. Zamboanguita\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (centralvis == 4){
                    cout << "You have chosen Siquijor. " << endl;

                    cout << "Siquijor has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Siquijor: " << endl;
                        cout << "1. Enrique Villanueva\n";
                        cout << "2. Larena\n";
                        cout << "3. Lazi\n";
                        cout << "4. Maria\n";
                        cout << "5. San Juan\n";
                        cout << "6. Siquijor\n";
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
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
                    cout << "You have chosen Zamboanga Del Norte." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Zamboanga Del Norte: " << endl;
                        cout << "1. Dapitan City\n";
                        cout << "2. Dipolog - Capital of Zamboanga Del Norte\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Zamboanga Del Norte: " << endl;
                        cout << "1. Baliguian\n";
                        cout << "2. Godod\n";
                        cout << "3. Gutalac\n";
                        cout << "4. Jose Dalman\n";
                        cout << "5. Kalawit\n";
                        cout << "6. Katipunan\n";
                        cout << "7. La Libertad\n";
                        cout << "8. Labason\n";
                        cout << "9. Leon B. Postigo\n";
                        cout << "10. Liloy\n";
                        cout << "11. Manukan\n";
                        cout << "12. Mutia\n";
                        cout << "13. Piñan\n";
                        cout << "14. Polanco\n";
                        cout << "15. President Manuel A. Roxas\n";
                        cout << "16. Rizal\n";
                        cout << "17. Salug\n";
                        cout << "18. Sergio Osmeña SR.\n";
                        cout << "19. Siayan\n";
                        cout << "20. Sibuco\n";
                        cout << "21. Sibutad\n";
                        cout << "22. Sindangan\n";
                        cout << "23. Siocon\n";
                        cout << "24. Sirawai\n";
                        cout << "25. Tampilisan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (zamboangapen == 2){
                    cout << "You have chosen Zamboanga Del Sur." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Zamboanga Del Sur: " << endl;
                        cout << "Pagadian - Capital of Zamboanga Del Sur and Regional Center of the Zamboanga Peninsula.\n";

                        cout << "Would you like to find out more about Pagadian and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Zamboanga Del Sur: " << endl;
                        cout << "1. Aurora\n";
                        cout << "2. Bayog\n";
                        cout << "3. Dimataling\n";
                        cout << "4. Dinas\n";
                        cout << "5. Dumalinao\n";
                        cout << "6. Dumingag\n";
                        cout << "7. Guipos\n";
                        cout << "8. Josefina\n";
                        cout << "9. Kumalarang\n";
                        cout << "10. Labangan\n";
                        cout << "11. Lakewood\n";
                        cout << "12. Lapuyan\n";
                        cout << "13. Mahayag\n";
                        cout << "14. Margosatubig\n";
                        cout << "15. Midsalip\n";
                        cout << "16. Molave\n";
                        cout << "17. Pitogo\n";
                        cout << "18. Ramon Magsaysay\n";
                        cout << "19. San Miguel\n";
                        cout << "20. San Pablo\n";
                        cout << "21. Sominot\n";
                        cout << "22. Tabina\n";
                        cout << "23. Tambulig\n";
                        cout << "24. Tigbao\n";
                        cout << "25. Tukuran\n";
                        cout << "26. Vincenzo A. Sagun\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (zamboangapen == 3){
                    cout << "You have chosen Zamboanga Sibugay." << endl;

                    cout << "Zamboanga Sibugay has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Zamboanga Sibugay: " << endl;
                        cout << "1. Alicia\n";
                        cout << "2. Buug\n";
                        cout << "3. Diplahan\n";
                        cout << "4. Imelda\n";
                        cout << "5. Ipil - Capital of Zamboanga Sibugay\n";
                        cout << "6. Kabasalan\n";
                        cout << "7. Mabuhay\n";
                        cout << "8. Malangas\n";
                        cout << "9. Naga\n";
                        cout << "10. Olutanga\n";
                        cout << "11. Payao\n";
                        cout << "12. Roseller Lim\n";
                        cout << "13. Siay\n";
                        cout << "14. Talusan\n";
                        cout << "15. Titay\n";
                        cout << "16. Tungawan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
              
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
                        char citybarangays;
                        cout << "Here are all the cities in Davao de Oro: " << endl;
                        cout << "1. Nabunturan\n";
                        cout << "2. Davao City\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Davao de Oro: " << endl;
                        cout << "1. Compostela\n";
                        cout << "2. Laak\n";
                        cout << "3. Mabini\n";
                        cout << "4. Maco\n";
                        cout << "5. Maragusan\n";
                        cout << "6. Mawab\n";
                        cout << "7. Monkayo\n";
                        cout << "8. Montevista\n";
                        cout << "9. New Bataan\n";
                        cout << "10. Pantukan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (davaoreg == 2){
                    cout << "You have chosen Davao del Norte\n";

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Davao del Norte: " << endl;
                        cout << "Tagum\n";

                        cout << "Would you like to find out more about Tagum and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }

                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Davao del Norte: " << endl;
                        cout << "1. Asuncion\n";
                        cout << "2. Braulio E. Dujali\n";
                        cout << "3. Carmen\n";
                        cout << "4. Kapalong\n";
                        cout << "5. New Corella\n";
                        cout << "6. Panabo\n";
                        cout << "7. Samal\n";
                        cout << "8. San Isidro\n";
                        cout << "9. Santo Tomas\n";
                        cout << "10. Talaingod\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (davaoreg == 3){
                    cout << "You have chosen Davao del Sur\n";
                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Davao del Sur: " << endl;
                        cout << "The only city in Davao del Sur is Digos.\n";
                        cout << "Would you like to find out more about Digos and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Davao del Sur: " << endl;
                        cout << "1. Bansalan\n";
                        cout << "2. Hagonoy\n";
                        cout << "3. Kiblawan\n";
                        cout << "4. Magsaysay\n";
                        cout << "5. Malalag\n";
                        cout << "6. Matanao\n";
                        cout << "7. Padada\n";
                        cout << "8. Santa Cruz\n";
                        cout << "9. Sulop\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }              
                        }
                        }
                        }
                    }

                    else if (davaoreg == 4){
                    cout << "You have chosen Davao Occidental. " << endl;

                    cout << "Davao Occidental has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Davao Occidental: " << endl;
                        cout << "1. Don Marcelino\n";
                        cout << "2. Jose Abad Santos\n";
                        cout << "3. Malita - Capital of Davao Occidental\n";
                        cout << "4. Santa Maria\n";
                        cout << "5. Sarangani\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (davaoreg == 5){
                    cout << "You have chosen Davao Oriental." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Davao Oriental: " << endl;
                        cout << "Mati is the only city in Davao Oriental.\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about Mati\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Davao Oriental: " << endl;
                        cout << "1. Baganga\n";
                        cout << "2. Banaybanay\n";
                        cout << "3. Boston\n";
                        cout << "4. Caraga\n";
                        cout << "5. Cateel\n";
                        cout << "6. Governor Generoso\n";
                        cout << "7. Lupon\n";
                        cout << "8. Manay\n";
                        cout << "9. San Isidro\n";
                        cout << "10. Tarragona\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        }
                        }
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
                        char citybarangays;
                        cout << "Here are all the cities in Cotabato: " << endl;
                        cout << "1. Kidapawan\n";
                        cout << "2. Cotabato City\n";
                        cout << "3. General Santos\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Cotabato: " << endl;
                        cout << "1. Alamada\n";
                        cout << "2. Aleosan\n";
                        cout << "3. Antipas\n";
                        cout << "4. Arakan\n";
                        cout << "5. Banisilan\n";
                        cout << "6. Carmen\n";
                        cout << "7. Kabacan\n";
                        cout << "8. Libungan\n";
                        cout << "9. Magpet\n";
                        cout << "10. Makilala\n";
                        cout << "11. Matalam\n";
                        cout << "12. Midsayap\n";
                        cout << "13. M'lang\n";
                        cout << "14. Pigcawayan\n";
                        cout << "15. Pikit\n";
                        cout << "16. President Roxas\n";
                        cout << "17. Tulunan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (soccsk == 2){
                    cout << "You have chosen Sarangani." << endl;

                    cout << "Sarangani has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Sarangani: " << endl;
                        cout << "1. Alabel\n";
                        cout << "1. Glan\n";
                        cout << "2. Kiamba\n";
                        cout << "3. Maasim\n";
                        cout << "4. Maitum\n";
                        cout << "5. Malapatan\n";
                        cout << "6. Malungon\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        default:{
                        break;
                        }

                        }
                        }
                        }

                    }

                    else if (soccsk == 3){
                    cout << "You have chosen South Cotabato." << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in South Cotabato: " << endl;
                        cout << "The only city in South Cotabato is Koronadal\n";

                        cout << "Would you like to find out more about Koronadal and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in South Cotabato: " << endl;
                        cout << "1. Banga\n";
                        cout << "2. Lake Sebu\n";
                        cout << "3. Norala\n";
                        cout << "4. Polomolok\n";
                        cout << "5. Santo Niño\n";
                        cout << "6. Surallah\n";
                        cout << "7. Tampakan\n";
                        cout << "8. Tantangan\n";
                        cout << "9. T'Boli\n";
                        cout << "10. Tupi\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (soccsk == 4){
                    cout << "You have chosen Sultan Kudarat." << endl;

                    cout << "Sultan Kudarat has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Sultan Kudarat: " << endl;
                        cout << "1. Bagumbayan\n";
                        cout << "2. Columbio\n";
                        cout << "3. Esperanza\n";
                        cout << "5. Isulan - Capital of Sultan Kudarat";
                        cout << "5. Kalamansig\n";
                        cout << "6. Lambayong\n";
                        cout << "7. Lebak\n";
                        cout << "8. Lutayan\n";
                        cout << "9. Palimbang\n";
                        cout << "10. President Quirino\n";
                        cout << "11. Senator Ninoy Aquino\n";
                        cout << "12. Tacurong\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        default:{
                        break;
                        }
                        }
                        }
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
                        char citybarangays;
                        cout << "Here are all the cities in NCR: " << endl;
                        cout << "1. Caloocan\n";
                        cout << "2. Las Piñas\n";
                        cout << "3. Makati\n";
                        cout << "4. Malabon\n";
                        cout << "5. Mandaluyong\n";
                        cout << "6. Manila - Capital of NCR and Regional Center\n";
                        cout << "7. Marikina\n";
                        cout << "8. Muntinlupa\n";
                        cout << "9. Navotas\n";
                        cout << "10. Parañaque\n";
                        cout << "11. Pasay\n";
                        cout << "12. Pasig\n";
                        cout << "13. Quezon City\n";
                        cout << "14. San Juan\n";
                        cout << "15. Taguig\n";
                        cout << "16. Valenzuela\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of Caloocan \n";
                        cout << "Mayor: Dale Gonzalo Rigor Malapitan \n";
                        cout << "Caloocan, city on Dagatdagatan Lagoon (Manila Bay), central Luzon, Philippines, adjacentto northern Manila. Founded in 1762, it became a municipality in 1815. Caloocan suffered much damage during World War II. Now part of Greater Manila, it is a growing center of industrialization as well as a resident suburb. Processed foods, textiles, and engineering prodcuts are its main industreis.\n";
                        cout << "Here are all the barangays in Caloocan : \n";
                        cout << "1. Barangay 1 \n";
                        cout << "2. Barangay 10 \n";
                        cout << "3. Barangay 100 \n";
                        cout << "4. Barangay 101\n";
                        cout << "5. Barangay 102\n";
                        cout << "6. Barangay 103\n";
                        cout << "7. Barangay 104\n";
                        cout << "8. Barangay 105\n";
                        cout << "9. Barangay 106\n";
                        cout << "10. Barangay 107\n";
                        cout << "11. Barangay 108\n";
                        cout << "12. Barangay 109\n";
                        cout << "13.\n";
                        cout << "14.\n";
                        cout << "15.\n";
                        cout << "16.\n";
                        cout << "17.\n";
                        cout << "18.\n";
                        cout << "19.\n";
                        cout << "20.\n";
                        cout << "21.\n";
                        cout << "22.\n";
                        cout << "\n";
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in NCR: " << endl;
                        cout << "Pateros\n";

                        cout << "Would you like to find out more about Pateros? (Y/N): ";
                        cin >> municipal;

                        if (municipal == 'Y' || municipal == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about municipality\n";
                

                        }
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

                    cout << "Abra has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Abra: " << endl;
                        cout << "1. Bangued - Capital of Abra\n";
                        cout << "2. Boliney\n";
                        cout << "3. Bucay\n";
                        cout << "4. Bucloc\n";
                        cout << "5. Daguioman\n";
                        cout << "6. Danglas\n";
                        cout << "7. Dolores\n";
                        cout << "8. La Paz\n";
                        cout << "9. Lacub\n";
                        cout << "10. Langailang\n";
                        cout << "11. Lagayan\n";
                        cout << "12. Langiden\n";
                        cout << "13. Licuan-Baay\n";
                        cout << "14. Luba\n";
                        cout << "15. Malibcong\n";
                        cout << "16. Manabo\n";
                        cout << "17. Peñarrubia\n";
                        cout << "18. Pidigan\n";
                        cout << "19. Pilar\n";
                        cout << "20. Sallapadan\n";
                        cout << "21. San Isidro\n";
                        cout << "22. San Juan\n";
                        cout << "23. San Quintin\n";
                        cout << "24. Tayum\n";
                        cout << "25. Tineg\n";
                        cout << "26. Tubo\n";
                        cout << "27. Villaciviosa\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (car == 2){
                    cout << "You have chosen Apayao" << endl;

                    cout << "Apayao has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Apayao: " << endl;
                        cout << "1. Calanasan\n";
                        cout << "2. Conner\n";
                        cout << "3. Flora\n";
                        cout << "4. Kabugao - Capital of Apayao\n";
                        cout << "5. Luna\n";
                        cout << "6. Pudtol\n";
                        cout << "7. Santa Marcela\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (car == 3){
                    cout << "You have chosen Benguet" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Benguet: " << endl;
                        cout << "Baguio - Highly Urbanized City and the Capital of Benguet and the Regional Center of CAR\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Benguet: " << endl;
                        cout << "1. Bakun\n";
                        cout << "2. Bokod\n";
                        cout << "3. Buguias\n";
                        cout << "4. Itogon\n";
                        cout << "5. Kabayan\n";
                        cout << "6. Kapangan\n";
                        cout << "7. Kibungan\n";
                        cout << "8. La Trinidad - Capital of Benguet\n";
                        cout << "9. Mankayan\n";
                        cout << "10. Sablan\n";
                        cout << "11. Tuba\n";
                        cout << "12. Tublay\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (car == 4){
                    cout << "You have chosen Ifugao" << endl;

                    cout << "Ifugao has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Ifugao: " << endl;
                        cout << "1. Aguinaldo\n";
                        cout << "2. Alfonso Lista\n";
                        cout << "3. Asipulo\n";
                        cout << "4. Banaue\n";
                        cout << "5. Hingyon\n";
                        cout << "6. Hungduan\n";
                        cout << "7. Kiangan\n";
                        cout << "8. Lagawe - Capital of Ifugao\n";
                        cout << "9. Lamut\n";
                        cout << "10. Mayoyao\n";
                        cout << "11. Tinoc\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (car == 5){
                    cout << "You have chosen Kalinga" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Kalinga: " << endl;
                        cout << "Tabuk - Capital of Kalinga\n";

                        cout << "Would you like to find out more about CITY and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Kalinga: " << endl;
                        cout << "1. Balbalan\n";
                        cout << "2. Lubuagan\n";
                        cout << "3. Pasil\n";
                        cout << "4. Pinukpuk\n";
                        cout << "5. Rizal\n";
                        cout << "6. Tanudan\n";
                        cout << "7. Tinglayan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (car == 6){
                    cout << "You have chosen Mountain Province." << endl;

                    cout << "Mountain Province has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Mountain Province: " << endl;
                        cout << "1. Barlig\n";
                        cout << "2. Bauko\n";
                        cout << "3. Besao\n";
                        cout << "4. Bontoc - Capital of Mountain Province\n";
                        cout << "5. Natonin\n";
                        cout << "6. Paracelis\n";
                        cout << "7. Sabangan\n";
                        cout << "8. Sadanga\n";
                        cout << "9. Sagada\n";
                        cout << "10. Tadian\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        }
                        }
                        }

                    }
                }
            break;
            }
            
            case 17: {//COMPLETE
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
                        char citybarangays;
                        cout << "Here are all the cities in Basilan: " << endl;
                        cout << "1. Isabela City\n";
                        cout << "2. Lamitan \n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Basilan: " << endl;
                        cout << "1. Akbar\n";
                        cout << "2. Al-Barka\n";
                        cout << "3. Hadji Mohammad Ajul\n";
                        cout << "4. Hadji Muhtamad\n";
                        cout << "5. Lantawan\n";
                        cout << "6. Maluso\n";
                        cout << "7. Sumisip\n";
                        cout << "8. Tabuan-Lasa\n";
                        cout << "9. Tipo-Tipo\n";
                        cout << "10. Tuburan\n";
                        cout << "11. Ungkaya Pukan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (barmm == 2){
                    cout << "You have chosen Lanao del Sur" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Lanao del Sur: " << endl;
                        cout << "Marawi - Capital of Lanao del Sur\n";

                        cout << "Would you like to find out more about Marawi and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Lanao del Sur: " << endl;
                        cout << "1. Amai Manabilang\n";
                        cout << "2. Bacolod-Kalawi\n";
                        cout << "3. Balabagan\n";
                        cout << "4. Balindong\n";
                        cout << "5. Bayang\n";
                        cout << "6. Binidayan\n";
                        cout << "7. Buadiposo-Buntong\n";
                        cout << "8. Bubong\n";
                        cout << "9. Butig\n";
                        cout << "10. Calanogas\n";
                        cout << "11. Ditsaan-Ramain\n";
                        cout << "12. Ganassi\n";
                        cout << "13. Kapai\n";
                        cout << "14. Kapatagan\n";
                        cout << "15. Lumba-Bayabao\n";
                        cout << "16. Lumbaca-Unayan\n";
                        cout << "17. Lumbatan\n";
                        cout << "18. Lumbayanague\n";
                        cout << "19. Madalum\n";
                        cout << "20. Madamba\n";
                        cout << "21. Maguing\n";
                        cout << "22. Malabang\n";
                        cout << "23. Marantao\n";
                        cout << "24. Marogong\n";
                        cout << "25. Masiu\n";
                        cout << "26. Mulondo\n";
                        cout << "27. Pagayawan\n";
                        cout << "28. Piagapo\n";
                        cout << "29. Picong\n";
                        cout << "30. Poona Bayabao\n";
                        cout << "31. Pualas\n";
                        cout << "32. Saguiaran\n";
                        cout << "33. Sultan Dumalondong\n";
                        cout << "34. Tagoloan II\n";
                        cout << "35. Tamparan\n";
                        cout << "36. Taraka\n";
                        cout << "37. Tubaran\n";
                        cout << "38. Tugaya\n";
                        cout << "39. Wao\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 38:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 39:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (barmm == 3){
                    cout << "You have chosen Maguindanao" << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Maguindanao: " << endl;
                        cout << "Cotabato City - Independent Component City located in Maguindanao\n";

                        cout << "Would you like to find out more about Cotabato City and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Maguindanao: " << endl;
                        cout << "1. Ampatuan\n";
                        cout << "2. Barira\n";
                        cout << "3. Buldon\n";
                        cout << "4. Buluan\n";
                        cout << "5. Datu Abdullah Sangki\n";
                        cout << "6. Datu Anggal Midtimbang\n";
                        cout << "7. Datu Blah T. Sinsuat\n";
                        cout << "8. Datu Hoffer Ampatuan\n";
                        cout << "9. Datu Montawal\n";
                        cout << "10. Datu Odin Sinsuat\n";
                        cout << "11. Datu Paglas\n";
                        cout << "12. Datu Piang\n";
                        cout << "13. Datu Salibo\n";
                        cout << "14. Datu Saudi-Ampatuan\n";
                        cout << "15. Datu Unsay\n";
                        cout << "16. General Salipada K. Pendatun\n";
                        cout << "17. Guindulungan\n";
                        cout << "18. Kabuntalan\n";
                        cout << "19. Mamasapano\n";
                        cout << "20. Mangudadatu\n";
                        cout << "21. Matanog\n";
                        cout << "22. Northern Kabuntalan\n";
                        cout << "23. Pagalungan\n";
                        cout << "24. Paglat\n";
                        cout << "25. Pandag\n";
                        cout << "26. Parang\n";
                        cout << "27. Rajah Buayan\n";
                        cout << "28. Shariff Aguak - Capital of Maguindanao\n";
                        cout << "29. Shariff Saydona Mustapaha\n";
                        cout << "30. South Upi\n";
                        cout << "31. Sultan Kudarat\n";
                        cout << "32. Sultan Mastura\n";
                        cout << "33. Sultan sa Barongis\n";
                        cout << "34. Sultan Sumagka\n";
                        cout << "35. Talayan\n";
                        cout << "36. Upi\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                        
                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }

                    else if (barmm == 4){
                    cout << "You have chosen Sulu" << endl;

                    cout << "Sulu has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                       if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Sulu: " << endl;
                        cout << "1. Banguingui\n";
                        cout << "2. Hadji Panglima Tahil\n";
                        cout << "3. Indanan\n";
                        cout << "4. Jolo - Capital of Sulu\n";
                        cout << "5. Kalingalan Caluang\n";
                        cout << "6. Lugus\n";
                        cout << "7. Luuk\n";
                        cout << "8. Maimbung\n";
                        cout << "9. Old Panamao\n";
                        cout << "10. Omar\n";
                        cout << "11. Pandami\n";
                        cout << "12. Panglima Estino\n";
                        cout << "13. Pangutaran\n";
                        cout << "14. Parang\n";
                        cout << "15. Pata\n";
                        cout << "16. Patikul\n";
                        cout << "17. Siasi\n";
                        cout << "18. Talipao\n";
                        cout << "19. Tapul\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    } 

                    else if (barmm == 5){
                    cout << "You have chosen Tawi-Tawi" << endl;

                    cout << "Tawi-Tawi has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Tawi-Tawi: " << endl;
                        cout << "1. Bongao - Capital of Tawi-Tawi\n";
                        cout << "2. Languyan\n";
                        cout << "3. Mapun\n";
                        cout << "4. Panglima Sugala\n";
                        cout << "5. Sapa-Sapa\n";
                        cout << "6. Sibutu\n";
                        cout << "7. Simunul\n";
                        cout << "8. Sitangkai\n";
                        cout << "9. South Ubian\n";
                        cout << "10. Tandubas\n";
                        cout << "11. Turtle Islands\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it and its barangays: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        cout << "Total population in municipality \n";
                        cout << "Here are all the barangays in \n";
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }
                    }
                }
            

            break;
            }

            }   

        } while (info == 'Y');

        }
        

        }//IFCHOOSE=Y


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
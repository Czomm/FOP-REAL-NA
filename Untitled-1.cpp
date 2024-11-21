#include <iostream> 
#include <string>
#include <limits>
using namespace std;

int main () {
    string CaloocanBrgys[] = {"Barangay 1", "Barangay 10", "Barangay 100", "Barangay 101", "Barangay 102","Barangay 103", "Barangay 104", "Barangay 105", "Barangay 106", "Barangay 107","Barangay 108", "Barangay 109", "Barangay 110", "Barangay 111", "Barangay 112","Barangay 113", "Barangay 114", "Barangay 115", "Barangay 116", "Barangay 117","Barangay 118", "Barangay 119", "Barangay 12", "Barangay 120", "Barangay 121","Barangay 122", "Barangay 123", "Barangay 124", "Barangay 125", "Barangay 126","Barangay 127", "Barangay 128", "Barangay 129", "Barangay 13", "Barangay 130","Barangay 131", "Barangay 132", "Barangay 133", "Barangay 134", "Barangay 135","Barangay 136", "Barangay 137", "Barangay 138", "Barangay 139", "Barangay 14","Barangay 140", "Barangay 141", "Barangay 142", "Barangay 143", "Barangay 144","Barangay 145", "Barangay 146", "Barangay 147", "Barangay 148", "Barangay 149","Barangay 15", "Barangay 150", "Barangay 151", "Barangay 152", "Barangay 153","Barangay 154", "Barangay 155", "Barangay 156", "Barangay 157", "Barangay 158","Barangay 159", "Barangay 16", "Barangay 161", "Barangay 162", "Barangay 163","Barangay 164", "Barangay 165", "Barangay 166", "Barangay 167", "Barangay 168","Barangay 169", "Barangay 17", "Barangay 170", "Barangay 171", "Barangay 172","Barangay 173", "Barangay 174", "Barangay 175", "Barangay 176", "Barangay 177","Barangay 178", "Barangay 179", "Barangay 18", "Barangay 180", "Barangay 181","Barangay 182", "Barangay 183", "Barangay 184", "Barangay 185", "Barangay 186","Barangay 187", "Barangay 188", "Barangay 19", "Barangay 2", "Barangay 20","Barangay 21", "Barangay 22", "Barangay 23", "Barangay 24", "Barangay 25","Barangay 26", "Barangay 27", "Barangay 28", "Barangay 29", "Barangay 3","Barangay 30", "Barangay 31", "Barangay 32", "Barangay 33", "Barangay 34","Barangay 35", "Barangay 36", "Barangay 37", "Barangay 38", "Barangay 39","Barangay 4", "Barangay 40", "Barangay 41", "Barangay 42", "Barangay 43","Barangay 44", "Barangay 45", "Barangay 46", "Barangay 47", "Barangay 48","Barangay 49", "Barangay 5", "Barangay 50", "Barangay 51", "Barangay 52","Barangay 53", "Barangay 54", "Barangay 55", "Barangay 56", "Barangay 57","Barangay 58", "Barangay 59", "Barangay 6", "Barangay 60", "Barangay 61","Barangay 62", "Barangay 63", "Barangay 64", "Barangay 65", "Barangay 66","Barangay 67", "Barangay 68", "Barangay 69", "Barangay 7", "Barangay 70","Barangay 71", "Barangay 72", "Barangay 73", "Barangay 74", "Barangay 75","Barangay 76", "Barangay 77", "Barangay 78", "Barangay 79", "Barangay 8","Barangay 80", "Barangay 81", "Barangay 82", "Barangay 83", "Barangay 84","Barangay 85", "Barangay 86", "Barangay 87", "Barangay 88", "Barangay 89","Barangay 9", "Barangay 90", "Barangay 91", "Barangay 92", "Barangay 93","Barangay 94", "Barangay 95", "Barangay 96", "Barangay 97", "Barangay 98","Barangay 99","Barangay 11"};
    string LaoagBrgys[] = { "Barangay No. 1, San Lorenzo","Barangay No. 10, San Jose","Barangay No. 11, Santa Balbina","Barangay No. 12, San Isidro","Barangay No. 13, Nuestra Señora de Visitacion","Barangay No. 14, Santo Tomas","Barangay No. 15, San Guillermo","Barangay No. 16, San Jacinto","Barangay No. 17, San Francisco","Barangay No. 18, San Quirino","Barangay No. 19, Santa Marcela","Barangay No. 2, Santa Joaquina","Barangay No. 20, San Miguel","Barangay No. 21, San Pedro","Barangay No. 22, San Andres","Barangay No. 23, San Matias","Barangay No. 24, Nuestra Señora de Consolacion","Barangay No. 25, Santa Cayetana","Barangay No. 26, San Marcelino","Barangay No. 27, Nuestra Señora de Soledad","Barangay No. 28, San Bernardo","Barangay No. 29, Santo Tomas","Barangay No. 3, Nuestra Señora del Rosario","Barangay No. 30-A, Suyo","Barangay No. 30-B, Santa Maria","Barangay No. 31, Talingaan","Barangay No. 32-A, La Paz East","Barangay No. 32-B, La Paz West","Barangay No. 32-C La Paz East","Barangay No. 33-A, La Paz Proper","Barangay No. 33-B, La Paz Proper","Barangay No. 34-A, Gabu Norte West","Barangay No. 34-B, Gabu Norte East","Barangay No. 35, Gabu Sur","Barangay No. 36, Araniw","Barangay No. 37, Calayab","Barangay No. 38-A, Mangato East","Barangay No. 38-B, Mangato West","Barangay No. 39, Santa Rosa","Barangay No. 4, San Guillermo","Barangay No. 40, Balatong","Barangay No. 41, Balacad","Barangay No. 42, Apaya","Barangay No. 43, Cavit","Barangay No. 44, Zamboanga","Barangay No. 45, Tangid","Barangay No. 46, Nalbo","Barangay No. 47, Bengcag","Barangay No. 48-A, Cabungaan North","Barangay No. 48-B, Cabungaan South","Barangay No. 49-A, Darayday","Barangay No. 49-B, Raraburan","Barangay No. 5, San Pedro","Barangay No. 50, Buttong","Barangay No. 51-A, Nangalisan East","Barangay No. 51-B, Nangalisan West","Barangay No. 52-A, San Mateo","Barangay No. 52-B, Lataag","Barangay No. 53, Rioeng","Barangay No. 54-A, Lagui-Sail","Barangay No. 54-B, Camangaan","Barangay No. 55-A, Barit-Pandan","Barangay No. 55-B, Salet-Bulangon","Barangay No. 55-C, Vira","Barangay No. 56-A, Bacsil North","Barangay No. 56-B, Bacsil South","Barangay No. 57, Pila","Barangay No. 58, Casili","Barangay No. 59-A, Dibua South","Barangay No. 59-B, Dibua North","Barangay No. 6, San Agustin","Barangay No. 60-A, Caaoacan","Barangay No. 60-B, Madiladig","Barangay No. 61, Cataban","Barangay No. 62-A, Navotas North","Barangay No. 62-B, Navotas South","Barangay No. 7-A, Nuestra Señora de Natividad","Barangay No. 7-B, Nuestra Señora de Natividad", "Barangay No. 8, San Vicente", "Barangay No. 9, Santa Angela"};
    string BatacBrgys[] = {"Ablan Poblacion","Acosta Poblacion","Aglipay","Baay","Baligat","Baoa East","Baoa West","Barani","Ben-agan","Bil-loca","Biningan","Bungon","Callaguip","Camandingan","Camguidan","Cangrunaan","Capacuan","Caunayan","Colo","Dariwdiw","Lacub","Mabaleng","Magnuang","Maipalig","Nagbacalan","Naguirangan","Palongpong","Palpalicong","Parangopong","Payao","Pimentel","Quiling Norte","Quiling Sur","Quiom","Rayuray","Ricarte Poblacion","San Julian","San Mateo","San Pedro","Suabit","Sumader","Tabug","Valdez Poblacion"};
    string IlocosNorMuni[]{"Adams","Bacarra","Badoc","Bangui","Banna","Burgos","Carasi","Currimao","Dingras","Dumalneg","Marcos","Nueva Era","Pagudpud","Paoay","Pasuquin","Piddig","Pinili","San Nicolas","Sarrat","Solsona","Vintar"};
    string ViganBrgys[]{"Ayusan Norte","Ayusan Sur","Barangay I","Barangay II","Barangay II","Barangay IV","Barangay IX","Barangay V","Barangay VI","Barangay VII","Barangay VIII","Barraca","Beddeng Daya","Beddeng Laud","Bongtolan","Bulala","Cabalangegan","Cabaroan Daya","Cabaroan Laud","Camangaan","Capangpangan","Mindoro","Nagsangalan","Pantay Daya","Pantay Fatima","Pantay Laud","Paoa","Paratong","Pong-ol","Purok-a-bassit","Purok-a-dackel","Raois","Rugsuanan","Salindeg","San Jose","San Julian Norte","San Julian Sur","San Pedro","Tamag"};
    string CandonBrgys[]{"Allangigan Primero","Allangigan Segundo","Amguid","Ayudante","Bagani Camposanto","Bagani Gabor","Bagani Togco","Bagani Ubbog","Bagar","Balingaoan","Bugnay","Calaoaan","Calongbuyan","Caterman","Cubcubboot","Darapidap","Langlangca Primero","Langlangca Segundo","Oaig-Daya","Palacapac","Paras","Parioc Primero","Parioc Segundo","Patpata Primero","Patpata Segundo","Paypayad","Salvador Primero","Salvador Segundo","San Agustin","San Andres","San Antonio","San Isidro","San Jose","San Juan","San Nicolas","San Pedro","Santo Tomas","Tablac","Talogtog","Tamurong Primero","Tamurong Segundo","Villarica"};
    string IlocosSurMuni[] {"Alilem","Banayoyo","Bantay","Burgos","Cabugao","Caoayan","Cervantes","Galimuyod","Gregorio del Pilar","Lidlidda","Magsingal","Nagbukel","Narvacan","Quirino","Salcedo","San Emilio","San Ildefonso","San Juan","San Vicente","Santa","Santa Catalina","Santa Cruz","Santa Lucia","Santa Maria","Santiago","Santo Domingo","Sigay","Sinait","Sugpon","Suyo","Tagudin"};
    string SanFernandoBrgys[] {"Abut","Apaleng","Bacsil","Bangbangolan","Bangcusay","Barangay I","Barangay II","Barangay III","Barangay IV","Baraoas","Bato","Biday","Birunget","Bungro","Cabaroan","Cabarsican","Cadaclan","Calabugao","Camansi","Canaoay","Carlatan","Catbangen","Dallangayan Este","Dallangayan Oeste","Dalumpinas Este","Dalumpinas Oeste","Ilocanos Norte","Ilocanos Sur","Langcuas","Lingsat","Madayegdeg","Mameltac","Masicong","Nagyubuyuban","Namtutan","Narra Este","Narra Oeste","Pacpaco","Pagdalagan","Pagdaraoan","Pagudpud","Pao Norte","Pao Sur","Parian","Pias","Poro","Puspus","Sacyud","Sagayad","San Agustin","San Francisco","San Vicente","Santiago Norte","Santiago Sur","Saoay","Sevilla","Siboan-Otong","Tanqui","Tanquigan"};
    string AlaminosBrgys[] {"Alos","Amandiego","Amangbangan","Balangobong","Balayang","Baleyadaan","Bisocol","Bolaney","Bued","Cabatuan","Cayucay","Dulacac","Inerangan","Landoc","Linmansangan","Lucap","Maawi","Macatiw","Magsaysay","Mona","Palamis","Pandan","Pangapisan","Poblacion","Pocalpocal","Pogo","Polo","Quibuar","Sabangan","San Antonio","San Jose","San Roque","San Vicente","Santa Maria","Tanaytay","Tangcarang","Tawintawin","Telbang","Victoria"};
    string DagupanBrgys[] {"Bacayao Norte","Bacayao Sur","Barangay I","Barangay II","Barangay IV","Bolosan","Bonuan Binloc","Bonuan Boquig","Bonuan Gueset","Calmay","Carael","Caranglaan","Herrero","Lasip Chico","Lasip Grande","Lomboy","Lucao","Malued","Mamalingling","Mangin","Mayombo","Pantal","Poblacion Oeste","Pogo Chico","Pogo Grande","Pugaro Suit","Salapingao","Salisay","Tambac","Tapuac","Tebeng"};
    string SanCarlosBrgys[] {"Abanon","Agdao","Anando","Ano","Antipangol","Aponit","Bacnar","Balaya","Balayong","Baldog","Balite Sur","Balococ","Bani","Bega","Bocboc","Bogaoan","Bolingit","Bolosan","Bonifacio","Buenglat","Bugallon-Posadas Street","Burgos Padlan","Cacaritan","Caingal","Calobaoan","Calomboyan","Caoayan-Kiling","Capataan","Cobol","Coliling","Cruz","Doyong","Gamata","Guelew","Ilang","Inerangan","Isla","Libas","Lilimasan","Longos","Lucban","M. Soriano","Mabalbalino","Mabini","Magtaking","Malacañang","Maliwara","Mamarlao","Manzon","Matagdem","Mestizo Norte","Naguilayan","Nilentap","Padilla-Gomez","Pagal","Paitan-Panoypoy","Palaming","Palaris","Palospos","Pangalangan","Pangoloan","Pangpang","Parayao","Payapa","Payar","Perez Boulevard","PNR Station Site","Polo","Quezon Boulevard","Quintong","Rizal","Roxas Boulevard","Salinap","San Juan","San Pedro-Taloy","Sapinit","Supo","Talang","Tamayo","Tandang Sora","Tandoc","Tarece","Tarectec","Tayambani","Tebag","Turac"};
    string UrdanetaBrgys[] {"Anonas","Bactad East","Bayaoas","Bolaoen","Cabaruan","Cabuloan","Camanang","Camantiles","Casantaan","Catablan","Cayambanan","Consolacion","Dilan Paurido","Dr. Pedro T. Orata","Labit Proper","Labit West","Mabanogbog","Macalong","Nancalobasaan","Nancamaliran East","Nancamaliran West","Nancayasan","Oltama","Palina East","Palina West","Pinmaludpod","Poblacion","San Jose","San Vicente","Santa Lucia","Santo Domingo","Sugcong","Tipuso","Tulong"};
    string PangasinanMuni[] = {"Agno", "Aguilar", "Alcala", "Anda", "Asingan", "Balungao", "Bani", "Basista", "Bautista", "Bayambang", "Binalonan", "Binmaley", "Bolinao", "Bugallon", "Burgos", "Calasiao", "Dasol", "Infanta", "Labrador", "Laoac", "Lingayen - Capital of Pangasinan", "Mabini", "Malasiqui", "Manaoag", "Mangaldan", "Mangatarem", "Mapandan", "Natividad", "Pozorrubio", "Rosales", "San Fabian", "San Jacinto", "San Manuel", "San Nicolas", "San Quintin", "Santa Barbara", "Santa Maria", "Santo Tomas", "Sison", "Sual", "Tayug", "Umingan", "Urbiztondo", "Villasis"};
    string TuguegaraoBrgys[] = {"Annafunan East", "Annafunan West", "Atulayan Norte", "Atulayan Sur", "Bagay", "Buntun", "Caggay", "Capatan", "Carig", "Caritan Centro", "Caritan Norte", "Caritan Sur", "Cataggaman Nuevo", "Cataggaman Pardo", "Cataggaman Viejo", "Centro 1", "Centro 10", "Centro 11", "Centro 12", "Centro 2", "Centro 3", "Centro 4", "Centro 5", "Centro 6", "Centro 7", "Centro 8", "Centro 9", "Dadda", "Gosi Norte", "Gosi Sur", "Larion Alto", "Larion Bajo", "Leonarda", "Libag Norte", "Libag Sur", "Linao East", "Linao Norte", "Linao West", "Nambbalan Norte", "Nambbalan Sur", "Pallua Norte", "Pallua Sur", "Pengue", "Reyes", "San Gabriel", "Tagga", "Tanza", "Ugac Norte", "Ugac Sur"};
    string CagayanMuni[] = {"Abulug", "Alcala", "Allacapan", "Amulung", "Aparri", "Baggao", "Ballesteros", "Buguey", "Calayan", "Camalaniugan", "Claveria", "Enrile", "Gattaran", "Gonzaga", "Iguig", "Lal-lo", "Lasam", "Pamplona", "Peñablanca", "Piat", "Rizal", "Sanchez-Mira", "Santa Ana", "Santa Praxedes", "Santa Teresita", "Santo Niño", "Solana", "Tuao"};
    string CauayanBrgys[] = {"Alicaocao", "Alinam", "Amobocan", "Andarayan", "Baculod", "Baringin Norte", "Baringin Sur", "Buena Suerte", "Bugallon", "Buyon", "Cabaruan", "Cabugao", "Carabatan Bacareno", "Carabatan Chica", "Carabatan Grande", "Carabatan Punta", "Casalatan", "Cassap Fuera", "Catalina", "Culalabat", "Dabburab", "De Vera", "Dianao", "Disimuray", "District I", "District II", "District III", "Duminit", "Faustino", "Gagabutan", "Gappal", "Guayabal", "Labinab", "Linglingay", "Mabantad", "Maligaya", "Manaoag", "Marabulig I", "Marabulig II", "Minante I", "Minante II", "Naganacan", "Nagcampegan", "Nagrumbuan", "Nungnungan I", "Nungnungan II", "Pinoma", "Rizal", "Rogus", "San Antonio", "San Fermin", "San Francisco", "San Isidro", "San Luis", "San Pablo", "Santa Luciana", "Santa Maria", "Sillawit", "Sinippil", "Tagaran", "Turayong", "Union", "Villa Concepcion", "Villa Luna", "Villaflor"};
    string IlaganBrgys[] = {"Aggasian", "Alibagu", "Allinguigan 1st", "Allinguigan 2nd", "Allinguigan 3rd", "Arusip", "Baculod", "Bagong Silang", "Bagumbayan", "Baligatan", "Ballacong", "Bangag", "Batong-Labang", "Bigao", "Cabannungan 1st", "Cabannungan 2nd", "Cabeseria 10", "Cabeseria 14 and 16", "Cabeseria 17 and 21", "Cabeseria 19", "Cabeseria 2", "Cabeseria 22", "Cabeseria 23", "Cabeseria 25", "Cabeseria 27", "Cabeseria 3", "Cabeseria 4", "Cabeseria 5", "Cabeseria 6 & 24", "Cabeseria 7", "Cabeseria 9 and 11", "Cadu", "Calamagui 1st", "Calamagui 2nd", "Camunatan", "Capellan", "Capo", "Carikkikan Norte", "Carikkikan Sur", "Centro Poblacion", "Centro-San Antonio", "Fugu", "Fuyo", "Gayong-Gayong Norte", "Gayong-Gayong Sur", "Guinatan", "Imelda Bliss Village", "Lullutan", "Malalam", "Malasin", "Manaring", "Mangcuram", "Marana I", "Marana II", "Marana III", "Minabang", "Morado", "Naguilian Norte", "Naguilian Sur", "Namnama", "Nanaguan", "Osmeña", "Paliueg", "Pasa", "Pilar", "Quimalabasa", "Rang-ayan", "Rugao", "Salindingan", "San Andres", "San Felipe", "San Ignacio", "San Isidro", "San Juan", "San Lorenzo", "San Pablo", "San Rodrigo", "San Vicente", "Santa Barbara", "Santa Catalina", "Santa Isabel Norte", "Santa Isabel Sur", "Santa Maria", "Santa Victoria", "Santo Tomas", "Siffu", "Sindon Bayabo", "Sindon Maride", "Sipay", "Tangcul", "Villa Imelda"};
    string SantiagoBrgys[] = {"Abra", "Ambalatungan", "Balintocatoc", "Baluarte", "Bannawag Norte", "Batal", "Buenavista", "Cabulay", "Calao East", "Calao West", "Calaocan", "Centro East", "Centro West", "Divisoria", "Dubinan East", "Dubinan West", "Luna", "Mabini", "Malvar", "Nabbuan", "Naggasican", "Patul", "Plaridel", "Rizal", "Rosario", "Sagana", "Salvador", "San Andres", "San Isidro", "San Jose", "Santa Rosa", "Sinili", "Sinsayon", "Victory Norte", "Victory Sur", "Villa Gonzaga", "Villasis"};
    string IsabelaMuni[] = {"Alicia", "Angadanan", "Aurora", "Benito Soliven", "Burgos", "Cabagan", "Cabatuan", "Cordon", "Delfin Albano", "Dinapigue", "Echague", "Gamu", "Jones", "Luna", "Maconacon", "Mailig", "Naguilian", "Palanan", "Quezon", "Quirino", "Ramon", "Reina Mercedes", "Roxas", "San Agustin", "San Guillermo", "San Isidro", "San Manuel", "San Mariano", "San Matero", "San Pablo", "Santa Maria", "Santo Tomas", "Tumauini"};
    string BalangaBrgys[] = {"Bagong Silang", "Bagumbayan", "Cabog-Cabog", "Camacho", "Cataning", "Central", "Cupang North", "Cupang Proper", "Cupang West", "Dangcol", "Doña Francisca", "Ibayo", "Lote", "Malabia", "Munting Batangas", "Poblacion", "Pto. Rivas Ibaba", "Pto. Rivas Itaas", "San Jose", "Sibacan", "Talisay", "Tanato", "Tenejero", "Tortugas", "Tuyo"};
    string MeycauayanBrgys[] = {"Bagbaguin", "Bahay Pare", "Bancal", "Banga", "Bayugo", "Caingin", "Calvario", "Camalig", "Hulo", "Iba", "Langka", "Lawa", "Libtong", "Liputan", "Longos", "Malhacan", "Pajo", "Pandayan", "Pantoc", "Perez", "Poblacion", "Saint Francis", "Saluysoy", "Tugatog", "Ubihan", "Zamora"};
    string SJdMBrgys[] = {"Assumption", "Bagong Buhay", "Bagong Buhay II", "Bagong Buhay III", "Citrus", "Ciudad Real", "Dulong Bayan", "Fatima", "Fatima II", "Fatima III", "Fatima IV", "Fatima V", "Francisco Homes-Guijo", "Francisco Homes-Mulawin", "Francisco Homes-Narra", "Francisco Homes-Yakal", "Gaya-gaya", "Graceville", "Gumaoc Central", "Gumaoc East", "Gumaoc West", "Kaybanban", "Kaypian", "Lawang Pari", "Maharlika", "Minuyan", "Minuyan II", "Minuyan III", "Minuyan IV", "Minuyan Proper", "Minuyan V", "Muzon", "Paradise III", "Poblacion", "Poblacion I", "Saint Martin de Porres", "San Isidro", "San Manuel", "San Martin", "San Martin II", "San Martin III", "San Martin IV", "San Pedro", "San Rafael", "San Rafael I", "San Rafael III", "San Rafael IV", "San Rafael V", "San Roque", "Santa Cruz", "Santa Cruz II", "Santa Cruz III", "Santa Cruz IV", "Santa Cruz V", "Santo Cristo", "Santo Niño", "Santo Niño II", "Sapang Palay", "Tungkong Mangga"};
    string MalolosBrgys[] = {"Anilao", "Atlag", "Babatnin", "Bagna", "Bagong Bayan", "Balayong", "Balite", "Bangkal", "Barihan", "Bulihan", "Bungahan", "Caingin", "Calero", "Caliligawan", "Canalate", "Caniogan", "Catmon", "Cofradia", "Dakila", "Guinhawa", "Ligas", "Liyang", "Longos", "Look 1st", "Look 2nd", "Lugam", "Mabolo", "Mambog", "Masile", "Matimbo", "Mojon", "Namayan", "Niugan", "Pamarawan", "Panasakan", "Pinagbakahan", "San Agustin", "San Gabriel", "San Juan", "San Pablo", "San Vicente", "Santiago", "Santisima Trinidad", "Santo Cristo", "Santo Niño", "Santo Rosario", "Santol", "Sumapang Bata", "Sumapang Matanda", "Taal", "Tikay"};
    string NuevaEcijaMuni[] = {"Aliaga", "Bongabon", "Cabiao", "Carranglan", "Cuyapo", "Gabaldon", "General Mamerto Natividad", "General Tinio", "Guimba", "Jaen", "Laur", "Licab", "Llanera", "Lupao", "Nampicuan", "Pantabangan", "Peñaranda", "Quezon", "Rizal", "San Antonio", "San Isidro", "San Leonardo", "Santa Rosa", "Santo Domingo", "Talavera", "Talugtug", "Zaragoza"};
    string SanFernandoPampangaBrgys[] = {"Alasas", "Baliti", "Bulaon", "Calulut", "Del Carmen", "Del Pilar", "Del Rosario", "Dela Paz Norte", "Dela Paz Sur", "Dolores", "Juliana", "Lara", "Lourdes", "Magliman", "Maimpis", "Malino", "Malpitic", "Pandaras", "Panipuan", "Pulung Bulu", "Quebiauan", "Saguin", "San Agustin", "San Felipe", "San Isidro", "San Jose", "San Juan", "San Nicolas", "San Pedro", "Santa Lucia", "Santa Teresita", "Santo Niño", "Santo Rosario", "Sindalan", "Telabastagan"};
    string AngelesBrgys[] = {"Agapito del Rosario", "Amsic", "Anunas", "Balibago", "Capaya", "Claro M. Recto", "Cuayan", "Cutcut", "Cutud", "Lourdes North West", "Lourdes Sur", "Lourdes Sur East", "Malabanias", "Margot", "Mining", "Ninoy Aquino", "Pampang", "Pandan", "Pulung Cacutud", "Pulung Maragul", "Pulungbulu", "Salapungan", "San Jose", "San Nicolas", "Santa Teresita", "Santa Trinidad", "Santo Cristo", "Santo Domingo", "Santo Rosario", "Sapalibutad", "Sapangbato", "Tabun", "Virgen Delos Remedios"};
    string TarlacBrgys[] = {"Aguso", "Alvindia Segundo", "Amucao", "Armenia", "Asturias", "Atioc", "Balanti", "Balete", "Balibago I", "Balibago II", "Balingcanaway", "Banaba", "Bantog", "Baras-baras", "Batang-batang", "Binauganan", "Bora", "Buenavista", "Buhilit", "Burot", "Calingcuan", "Capehan", "Carangian", "Care", "Central", "Culipat", "Cut-cut I", "Cut-cut II", "Dalayap", "Dela Paz", "Dolores", "Laoang", "Ligtasan", "Lourdes", "Mabini", "Maligaya", "Maliwalo", "Mapalacsiao", "Mapalad", "Matadero", "Matatalaib", "Paraiso", "Poblacion", "Salapungan", "San Carlos", "San Francisco", "San Isidro", "San Jose", "San Jose de Urquico", "San Juan de Mata", "San Luis", "San Manuel", "San Miguel", "San Nicolas", "San Pablo", "San Pascual", "San Rafael", "San Roque", "San Sebastian", "San Vicente", "Santa Cruz", "Santa Maria", "Santo Cristo", "Santo Domingo", "Santo Niño", "Sapang Maragul", "Sapang Tagalog", "Sepung Calzada", "Sinait", "Suizo", "Tariji", "Tibag", "Tibagan", "Trinidad", "Ungot", "Villa Bacolor"};
    string OlongapoBrgys[] = {"Asinan", "Banicain", "Barreto", "East Bajac-bajac", "East Tapinac", "Gordon Heights", "Kalaklan", "Mabayuan", "New Cabalan", "New Ilalim", "New Kababae", "New Kalalake", "Old Cabalan", "Pag-asa", "Santa Rita", "West Bajac-bajac", "West Tapinac"};
    string BatangasCityBrgys[] = {"Alangilan", "Balagtas", "Balete", "Banaba Center", "Banaba Ibaba", "Banaba Kanluran", "Banaba Silangan", "Barangay 1", "Barangay 10", "Barangay 11", "Barangay 12", "Barangay 13", "Barangay 14", "Barangay 15", "Barangay 16", "Barangay 17", "Barangay 18", "Barangay 19", "Barangay 2", "Barangay 20", "Barangay 21", "Barangay 22", "Barangay 23", "Barangay 24", "Barangay 3", "Barangay 4", "Barangay 5", "Barangay 6", "Barangay 7", "Barangay 8", "Barangay 9", "Bilogo", "Bolbok", "Bukal", "Calicanto", "Catandala", "Concepcion", "Conde Itaas", "Conde Labak", "Cuta", "Dalig", "Dela Paz", "Dela Paz Pulot Aplaya", "Dela Paz Pulot Itaas", "Domoclay", "Dumantay", "Gulod Itaas", "Gulod Labak", "Haligue Kanluran", "Haligue Silangan", "Ilihan", "Kumba", "Kumintang Ibaba", "Kumintang Ilaya", "Libjo", "Liponpon, Isla Verde", "Maapas", "Mabacong", "Mahabang Dahilig", "Mahabang Parang", "Mahacot Kanluran", "Mahacot Silangan", "Malalim", "Malibayo", "Malitam", "Maruclap", "Pagkilatan", "Paharang Kanluran", "Paharang Silangan", "Pallocan Kanluran", "Pallocan Silangan", "Pinamucan", "Pinamucan Ibaba", "Pinamucan Silangan", "Sampaga", "San Agapito, Isla Verde", "San Agustin Kanluran, Isla Verde", "San Agustin Silangan, Isla Verde", "San Andres, Isla Verde", "San Antonio, Isla Verde", "San Isidro", "San Jose Sico", "San Miguel", "San Pedro", "Santa Clara", "Santa Rita Aplaya", "Santa Rita Karsada", "Santo Domingo", "Santo Niño", "Simlong", "Sirang Lupa", "Sorosoro Ibaba", "Sorosoro Ilaya", "Sorosoro Karsada", "Tabangao Ambulong", "Tabangao Aplaya", "Tabangao Dao", "Talahib Pandayan", "Talahib Payapa", "Talumpok Kanluran", "Talumpok Silangan", "Tinga Itaas", "Tinga Labak", "Tulo", "Wawa"};
    string LipaCityBrgys[] = {"Adya", "Anilao", "Anilao-Labac", "Antipolo del Norte", "Antipolo del Sur", "Bagong Pook", "Balintawak", "Banaybanay", "Barangay 12", "Bolbok", "Bugtong na Pulo", "Bulacnin", "Bulaklakan", "Calamias", "Cumba", "Dagatan", "Duhatan", "Halang", "Inosloban", "Kayumanggi", "Latag", "Lodlod", "Lumbang", "Mabini", "Malagonlong", "Malitlit", "Marauoy", "Mataas na Lupa", "Munting Pulo", "Pagolingin Bata", "Pagolingin East", "Pagolingin West", "Pangao", "Pinagkawitan", "Pinagtongulan", "Plaridel", "Poblacion Barangay 1", "Poblacion Barangay 10", "Poblacion Barangay 11", "Poblacion Barangay 2", "Poblacion Barangay 3", "Poblacion Barangay 4", "Poblacion Barangay 5", "Poblacion Barangay 6", "Poblacion Barangay 7", "Poblacion Barangay 8", "Poblacion Barangay 9", "Poblacion Barangay 9-A", "Pusil", "Quezon", "Rizal", "Sabang", "Sampaguita", "San Benito", "San Carlos", "San Celestino", "San Francisco", "San Guillermo", "San Jose", "San Lucas", "San Salvador", "San Sebastian", "Santo Niño", "Santo Toribio", "Sapac", "Sico", "Talisay", "Tambo", "Tangob", "Tanguay", "Tibig", "Tipacan"};
    string SantoTomasBatangasBrgys[] = {"Barangay I", "Barangay II", "Barangay III", "Barangay IV", "San Agustin", "San Antonio", "San Bartolome", "San Felix", "San Fernando", "San Francisco", "San Isidro Norte", "San Isidro Sur", "San Joaquin", "San Jose", "San Juan", "San Luis", "San Miguel", "San Pablo", "San Pedro", "San Rafael", "San Roque", "San Vicente", "Santa Ana", "Santa Anastacia", "Santa Clara", "Santa Cruz", "Santa Elena", "Santa Maria", "Santa Teresita", "Santiago"};
    string TanauanBrgys[] = {"Altura Bata", "Altura Matanda", "Altura-South", "Ambulong", "Bagbag", "Bagumbayan", "Balele", "Banadero", "Banjo East", "Banjo Laurel", "Bilog-bilog", "Boot", "Cale", "Darasa", "Gonzales", "Hidalgo", "Janopol", "Janopol Oriental", "Laurel", "Luyos", "Mabini", "Malaking Pulo", "Maria Paz", "Maugat", "Montaña", "Natatas", "Pagaspas", "Pantay Bata", "Pantay Matanda", "Poblacion Barangay 1", "Poblacion Barangay 2", "Poblacion Barangay 3", "Poblacion Barangay 4", "Poblacion Barangay 5", "Poblacion Barangay 6", "Poblacion Barangay 7", "Sala", "Sambat", "San Jose", "Santol", "Santor", "Sulpoc", "Suplang", "Talaga", "Tinurik", "Trapiche", "Ulango", "Wawa"};
    string BatangasProvMuni[] = {"Agoncillo", "Alitagtag", "Balayan", "Balete", "Bauan", "Calaca", "Calatagan", "Cuenca", "Ibaan", "Laurel", "Lemery", "Lian", "Lobo", "Mabini", "Malvar", "Mataasnakahoy", "Nasugbu", "Padre Garcia", "Rosario", "San Jose", "San Juan", "San Luis", "San Nicolas", "San Pascual", "Santa Teresita", "Taal", "Talisay", "Taysan", "Tingloy", "Tuy"};
    string BacoorBrgys[] = {"Alima", "Aniban I", "Aniban II", "Aniban III", "Aniban IV", "Aniban V", "Banalo", "Bayanan", "Campo Santo", "Daang Bukid", "Digman", "Dulong Bayan", "Habay I", "Habay II", "Kaingin", "Ligas I", "Ligas II", "Ligas III", "Mabolo I", "Mabolo II", "Mabolo III", "Maliksi I", "Maliksi II", "Maliksi III", "Mambog I", "Mambog II", "Mambog III", "Mambog IV", "Mambog V", "Molino I", "Molino II", "Molino III", "Molino IV", "Molino V", "Molino VI", "Molino VII", "Niog I", "Niog II", "Niog III", "P. F. Espiritu I", "P. F. Espiritu II", "P. F. Espiritu III", "P. F. Espiritu IV", "P. F. Espiritu V", "P. F. Espiritu VI", "P. F. Espiritu VII", "P. F. Espiritu VIII", "Queens Row Central", "Queens Row East", "Queens Row West", "Real I", "Real II", "Salinas I", "Salinas II", "Salinas III", "Salinas IV", "San Nicolas I", "San Nicolas II", "San Nicolas III", "Sineguelasan", "Tabing Dagat", "Talaba I", "Talaba II", "Talaba III", "Talaba IV", "Talaba V", "Talaba VI", "Talaba VII", "Zapote I", "Zapote II", "Zapote III", "Zapote IV", "Zapote V"};
    string CaviteCityBrgys[] = {"Barangay 1", "Barangay 10", "Barangay 10-A", "Barangay 10-B", "Barangay 11", "Barangay 12", "Barangay 13", "Barangay 14", "Barangay 15", "Barangay 16", "Barangay 17", "Barangay 18", "Barangay 19", "Barangay 2", "Barangay 20", "Barangay 21", "Barangay 22", "Barangay 22-A", "Barangay 23", "Barangay 24", "Barangay 25", "Barangay 26", "Barangay 27", "Barangay 28", "Barangay 29", "Barangay 29-A", "Barangay 3", "Barangay 30", "Barangay 31", "Barangay 32", "Barangay 33", "Barangay 34", "Barangay 35", "Barangay 36", "Barangay 36-A", "Barangay 37", "Barangay 37-A", "Barangay 38", "Barangay 38-A", "Barangay 39", "Barangay 4", "Barangay 40", "Barangay 41", "Barangay 42", "Barangay 42-A", "Barangay 42-B", "Barangay 42-C", "Barangay 43", "Barangay 44", "Barangay 45", "Barangay 45-A", "Barangay 46", "Barangay 47", "Barangay 47-A", "Barangay 47-B", "Barangay 48", "Barangay 48-A", "Barangay 49", "Barangay 49-A", "Barangay 5", "Barangay 50", "Barangay 51", "Barangay 52", "Barangay 53", "Barangay 53-A", "Barangay 53-B", "Barangay 54", "Barangay 54-A", "Barangay 55", "Barangay 56", "Barangay 57", "Barangay 58", "Barangay 58-A", "Barangay 59", "Barangay 6", "Barangay 60", "Barangay 61", "Barangay 61-A", "Barangay 62", "Barangay 62-A", "Barangay 62-B", "Barangay 7", "Barangay 8", "Barangay 9"};
    string DasmaBrgys[] = {"Burol", "Burol I", "Burol II", "Burol III", "Datu Esmael", "Emmanuel Bergado I", "Emmanuel Bergado II", "Fatima I", "Fatima II", "Fatima III", "H-2", "Langkaan I", "Langkaan II", "Luzviminda I", "Luzviminda II", "Paliparan I", "Paliparan II", "Paliparan III", "Sabang", "Saint Peter I", "Saint Peter II", "Salawag", "Salitran I", "Salitran II", "Salitran III", "Salitran IV", "Sampaloc I", "Sampaloc II", "Sampaloc III", "Sampaloc IV", "Sampaloc V", "San Agustin I", "San Agustin II", "San Agustin III", "San Andres I", "San Andres II", "San Antonio de Padua I", "San Antonio de Padua II", "San Dionisio", "San Esteban", "San Francisco I", "San Francisco II", "San Isidro Labrador I", "San Isidro Labrador II", "San Jose", "San Juan", "San Lorenzo Ruiz I", "San Lorenzo Ruiz II", "San Luis I", "San Luis II", "San Manuel I", "San Manuel II", "San Mateo", "San Miguel", "San Miguel II", "San Nicolas I", "San Nicolas II", "San Roque", "San Simon", "Santa Cristina I", "Santa Cristina II", "Santa Cruz I", "Santa Cruz II", "Santa Fe", "Santa Lucia", "Santa Maria", "Santo Cristo", "Santo Niño I", "Santo Niño II", "Victoria Reyes", "Zone I", "Zone I-B", "Zone II", "Zone III", "Zone IV"};
    string GenTriasBrgys[] = {"Alingaro", "Arnaldo Poblacion", "Bacao I", "Bacao II", "Bagumbayan Poblacion", "Biclatan", "Buenavista I", "Buenavista II", "Buenavista III", "Corregidor Poblacion", "Dulong Bayan Poblacion", "Gov. Ferrer Poblacion", "Javalera", "Manggahan", "Navarro", "Ninety Sixth Poblacion", "Panungyanan", "Pasong Camachile I", "Pasong Camachile II", "Pasong Kawayan I", "Pasong Kawayan II", "Pinagtipunan", "Prinza Poblacion", "Sampalucan Poblacion", "San Francisco", "San Gabriel Poblacion", "San Juan I", "San Juan II", "Santa Clara", "Santiago", "Tapia", "Tejero", "Vibora Poblacion"};
    string ImusBrgys[] = {"Alapan I-A", "Alapan I-B", "Alapan I-C", "Alapan II-A", "Alapan II-B", "Anabu I-A", "Anabu I-B", "Anabu I-C", "Anabu I-D", "Anabu I-E", "Anabu I-F", "Anabu I-G", "Anabu II-A", "Anabu II-B", "Anabu II-C", "Anabu II-D", "Anabu II-E", "Anabu II-F", "Bagong Silang", "Bayan Luma I", "Bayan Luma II", "Bayan Luma III", "Bayan Luma IV", "Bayan Luma IX", "Bayan Luma V", "Bayan Luma VI", "Bayan Luma VII", "Bayan Luma VIII", "Bucandala I", "Bucandala II", "Bucandala III", "Bucandala IV", "Bucandala V", "Buhay na Tubig", "Carsadang Bago I", "Carsadang Bago II", "Magdalo", "Maharlika", "Malagasang I-A", "Malagasang I-B", "Malagasang I-C", "Malagasang I-D", "Malagasang I-E", "Malagasang I-F", "Malagasang I-G", "Malagasang II-A", "Malagasang II-B", "Malagasang II-C", "Malagasang II-D", "Malagasang II-E", "Malagasang II-F", "Malagasang II-G", "Mariano Espeleta I", "Mariano Espeleta II", "Mariano Espeleta III", "Medicion I-A", "Medicion I-B", "Medicion I-C", "Medicion I-D", "Medicion II-A", "Medicion II-B", "Medicion II-C", "Medicion II-D", "Medicion II-E", "Medicion II-F", "Pag-asa I", "Pag-asa II", "Pag-asa III", "Palico I", "Palico II", "Palico III", "Palico IV", "Pasong Buaya I", "Pasong Buaya II", "Pinagbuklod", "Poblacion I-A", "Poblacion I-B", "Poblacion I-C", "Poblacion II-A", "Poblacion II-B", "Poblacion III-A", "Poblacion III-B", "Poblacion IV-A", "Poblacion IV-B", "Poblacion IV-C", "Poblacion IV-D", "Tanzang Luma I", "Tanzang Luma II", "Tanzang Luma III", "Tanzang Luma IV", "Tanzang Luma V", "Tanzang Luma VI", "Toclong I-A", "Toclong I-B", "Toclong I-C", "Toclong II-A", "Toclong II-B"};
    string TagaytayBrgys[] = {"Asisan", "Bagong Tubig", "Calabuso", "Dapdap East", "Dapdap West", "Francisco", "Guinhawa North", "Guinhawa South", "Iruhin East", "Iruhin South", "Iruhin West", "Kaybagal East", "Kaybagal North", "Kaybagal South", "Mag-Asawang Ilat", "Maharlika East", "Maharlika West", "Maitim 2nd Central", "Maitim 2nd East", "Maitim 2nd West", "Mendez Crossing East", "Mendez Crossing West", "Neogan", "Patutong Malaki North", "Patutong Malaki South", "Sambong", "San Jose", "Silang Junction North", "Silang Junction South", "Sungay North", "Sungay South", "Tolentino East", "Tolentino West", "Zambal"};
    string TreceMartBrgys[] = {"Aguado", "Cabezas", "Cabuco", "Conchu", "De Ocampo", "Gregorio", "Inocencio", "Lallana", "Lapidario", "Luciano", "Osorio", "Perez", "San Agustin"};
    string BiñanCityBrgys[] = {"Biñan", "Bungahan", "Canlalay", "Casile", "De La Paz", "Ganado", "Langkiwa", "Loma", "Malaban", "Malamig", "Mampalasan", "Platero", "Poblacion", "San Antonio", "San Francisco", "San Jose", "San Vicente", "Santo Domingo", "Santo Niño", "Santo Tomas", "Soro-soro", "Timbao", "Tubigan", "Zapote"};
    string CabuyaoBrgys[] = {"Baclaran", "Banaybanay", "Banlic", "Barangay Dos", "Barangay Tres", "Barangay Uno", "Bigaa", "Butong", "Casile", "Diezmo", "Gulod", "Mamatid", "Marinig", "Niugan", "Pittland", "Pulo", "Sala", "San Isidro"};
    string CalambaBrgys[] = {"Bagong Kalsada", "Banadero", "Banlic", "Barandal", "Barangay 1", "Barangay 2", "Barangay 3", "Barangay 4", "Barangay 5", "Barangay 6", "Barangay 7", "Batino", "Bubuyan", "Bucal", "Bunggo", "Burol", "Camaligan", "Canlubang", "Halang", "Hornalan", "Kay-Anlog", "La Mesa", "Laguerta", "Lawa", "Lecheria", "Lingga", "Looc", "Mabato", "Majada Labas", "Makiling", "Mapagong", "Masili", "Maunong", "Mayapa", "Milagrosa", "Paciano Rizal", "Palingon", "Palo-Alto", "Pansol", "Parian", "Prinza", "Punta", "Puting Lupa", "Real", "Saimsim", "Sampiruhan", "San Cristobal", "San Jose", "San Juan", "Sirang Lupa", "Sucol", "Turbina", "Ulango", "Uwisan"};
    string SanPabLagunaBrgys[] = {"Atisan", "Bagong Bayan II-A", "Bagong Pook VI-C", "Barangay I-A", "Barangay I-B", "Barangay II-A", "Barangay II-B", "Barangay II-C", "Barangay II-D", "Barangay II-E", "Barangay II-F", "Barangay III-A", "Barangay III-B", "Barangay III-C", "Barangay III-D", "Barangay III-E", "Barangay III-F", "Barangay IV-A", "Barangay IV-B", "Barangay IV-C", "Barangay V-A", "Barangay V-B", "Barangay V-C", "Barangay V-D", "Barangay VI-A", "Barangay VI-B", "Barangay VI-D", "Barangay VI-E", "Barangay VII-A", "Barangay VII-B", "Barangay VII-C", "Barangay VII-D", "Barangay VII-E", "Bautista", "Concepcion", "Del Remedio", "Dolores", "San Antonio 1", "San Antonio 2", "San Bartolome", "San Buenaventura", "San Crispin", "San Cristobal", "San Diego", "San Francisco", "San Gabriel", "San Gregorio", "San Ignacio", "San Isidro", "San Joaquin", "San Jose", "San Juan", "San Lorenzo", "San Lucas 1", "San Lucas 2", "San Marcos", "San Mateo", "San Miguel", "San Nicolas", "San Pedro", "San Rafael", "San Roque", "San Vicente", "Santa Ana", "Santa Catalina", "Santa Cruz", "Santa Elena", "Santa Felomina", "Santa Isabel", "Santa Maria", "Santa Maria Magdalena", "Santa Monica", "Santa Veronica", "Santiago I", "Santiago II", "Santisimo Rosario", "Santo Angel", "Santo Cristo", "Santo Niño", "Soledad"};
    string SanPedLagunaBrgys[] = {"Bagong Silang", "Calendola", "Chrysanthemum", "Cuyab", "Estrella", "Fatima", "G.S.I.S.", "Landayan", "Langgam", "Laram", "Magsaysay", "Maharlika", "Narra", "Nueva", "Pacita 1", "Pacita 2", "Poblacion", "Riverside", "Rosario", "Sampaguita Village", "San Antonio", "San Lorenzo Ruiz", "San Roque", "San Vicente", "Santo Niño", "United Bayanihan", "United Better Living"};
    string SantaRosaLagunaBrgys[] = {"Aplaya", "Balibago", "Caingin", "Dila", "Dita", "Don Jose", "Ibaba", "Kanluran", "Labas", "Macabling", "Malitlit", "Malusak", "Market Area", "Pook", "Pulong Santa Cruz", "Santo Domingo", "Sinalhan", "Tagapo"};
    string LagunaMuni[] = {"Alaminos", "Bay", "Calauan", "Cavinti", "Famy", "Kalayaan", "Liliw", "Los Baños", "Luisiana", "Lumban", "Mabitac", "Magdalena", "Majayjay", "Nagcarlan", "Paete", "Pagsanjan", "Pakil", "Pangil", "Pila", "Rizal", "Santa Cruz - Capital of Laguna", "Santa Maria", "Siniloan", "Victoria"};
    string LucenaCityBrgys[] = {"Barangay 1", "Barangay 10", "Barangay 11", "Barangay 2", "Barangay 3", "Barangay 4", "Barangay 5", "Barangay 6", "Barangay 7", "Barangay 8", "Barangay 9", "Barra", "Bocohan", "Cotta", "Dalahican", "Domoit", "Gulang-gulang", "Ibabang Dupay", "Ibabang Iyam", "Ibabang Talim", "Ilayang Dupay", "Ilayang Iyam", "Ilayang Talim", "Isabang", "Market View", "Mayao Castillo", "Mayao Crossing", "Mayao Kanluran", "Mayao Parada", "Mayao Silangan", "Ransohan", "Salinas", "Talao-talao"};
    string TayabasBrgys[] = {"Alitao", "Alsam Ibaba", "Alsam Ilaya", "Alupay", "Angeles Zone I", "Angeles Zone II", "Angeles Zone III", "Angeles Zone IV", "Angustias Zone I", "Angustias Zone II", "Angustias Zone III", "Angustias Zone IV", "Anos", "Ayaas", "Baguio", "Banilad", "Bukal Ibaba", "Bukal Ilaya", "Calantas", "Calumpang", "Camaysa", "Dapdap", "Domoit Kanluran", "Domoit Silangan", "Gibanga", "Ibas", "Ilasan Ibaba", "Ilasan Ilaya", "Ipilan", "Isabang", "Katigan Kanluran", "Katigan Silangan", "Lakawan", "Lalo", "Lawigue", "Lita", "Malaoa", "Masin", "Mate", "Mateuna", "Mayowe", "Nangka Ibaba", "Nangka Ilaya", "Opias", "Palale Ibaba", "Palale Ilaya", "Palale Kanluran", "Palale Silangan", "Pandakaki", "Pook", "Potol", "San Diego Zone I", "San Diego Zone II", "San Diego Zone III", "San Diego Zone IV", "San Isidro Zone I", "San Isidro Zone II", "San Isidro Zone III", "San Isidro Zone IV", "San Roque Zone I", "San Roque Zone II", "Talolong", "Tamlong", "Tongko", "Valencia", "Wakas"};
    string AntipoloRizalBrgys[] = {"Bagong Nayon", "Beverly Hills", "Calawis", "Cupang", "Dalig", "Dela Paz", "Inarawan", "Mambugan", "Mayamot", "Muntingdilaw", "San Isidro", "San Jose", "San Juan", "San Luis", "San Roque", "Santa Cruz"};
    string PuertoPrincesaBrgys[] = {"Babuyan", "Bacungan", "Bagong Bayan", "Bagong Pag-asa", "Bagong Sikat", "Bagong Silang", "Bahile", "Bancao-bancao", "Barangay ng mga Mangingisda", "Binduyan", "Buenavista", "Cabayugan", "Concepcion", "Inagawan", "Inagawan Sub-Colony", "Irawan", "Iwahig", "Kalipay", "Kamuning", "Langogan", "Liwanag", "Lucbuan", "Luzviminda", "Mabuhay", "Macarascas", "Magkakaibigan", "Maligaya", "Manalo", "Mandaragat", "Manggahan", "Maningning", "Maoyon", "Marufinas", "Maruyogon", "Masigla", "Masikap", "Masipag", "Matahimik", "Matiyaga", "Maunlad", "Milagrosa", "Model", "Montible", "Napsan", "New Panggangan", "Pagkakaisa", "Princesa", "Salvacion", "San Jose", "San Manuel", "San Miguel", "San Pedro", "San Rafael", "Santa Cruz", "Santa Lourdes", "Santa Lucia", "Santa Monica", "Seaside", "Sicsican", "Simpocan", "Tagabinit", "Tagburos", "Tagumpay", "Tanabag", "Tanglaw", "Tiniguiban"};
    string PalawanMuni[] = {"Aborlan", "Agutaya", "Araceli", "Balabac", "Bataraza", "Brooke's Point", "Busuanga", "Cagayancillo", "Coron", "Culion", "Cuyo", "Dumaran", "El Nido", "Kalayaan", "Linapacan", "Magsaysay", "Narra", "Quezon", "Rizal", "Roxas", "San Vicente", "Sofronio Española", "Taytay"};
    string RomblonProvMuni[] = {"Alcantara", "Banton", "Cajidiocan", "Calatrava", "Concepcion", "Corcuera", "Ferrol", "Looc", "Magdiwang", "Odiongan", "Romblon - Capital of Romblon", "San Agustin", "San Andres", "San Fernando", "San Jose", "Santa Fe", "Santa Maria"};
    string QuezonProvMuni[] = {"Agdangan", "Alabat", "Atimonan", "Buenavista", "Burdeos", "Candelaria", "Catanauan", "Dolores", "General Luna", "General Nakar", "Gumaca", "Infanta", "Jomalig", "Lopez", "Lucban", "Macalelon", "Mauban", "Mulanay", "Padre Burgos", "Pagbilao", "Panukulan", "Patnanungan", "Perez", "Pitogo", "Plaridel", "Polillo", "Quezon", "Real", "Sampaloc", "San Andres", "San Antonio", "San Francisco", "San Narciso", "Sariaya", "Tagkawayan", "Tiaong", "Unisan"};
    string LegazpiBrgys[] = {"Barangay 10-Cabugao", "Barangay 11-Maoyod Poblacion", "Barangay 12-Tula-tula", "Barangay 13-Ilawod West Poblacion", "Barangay 14-Ilawod Poblacion", "Barangay 15-Ilawod East Poblacion", "Barangay 16-Kawit-East Washington Drive", "Barangay 17-Rizal Street, Ilawod", "Barangay 18-Cabagñan West", "Barangay 19-Cabagñan", "Barangay 1-Em's Barrio", "Barangay 20-Cabagñan East", "Barangay 21-Binanuahan West", "Barangay 22-Binanuahan East", "Barangay 23-Imperial Court Subd.", "Barangay 24-Rizal Street", "Barangay 25-Lapu-lapu", "Barangay 26-Dinagaan", "Barangay 27-Victory Village South", "Barangay 28-Victory Village North", "Barangay 29-Sabang", "Barangay 2-Em's Barrio South", "Barangay 30-Pigcale", "Barangay 31-Centro-Baybay", "Barangay 32-San Roque", "Barangay 33-PNR-Peñaranda St.-Iraya", "Barangay 34-Oro Site-Magallanes St.", "Barangay 35-Tinago", "Barangay 36-Kapantawan", "Barangay 37-Bitano", "Barangay 38-Gogon", "Barangay 39-Bonot", "Barangay 3-Em's Barrio East", "Barangay 40-Cruzada", "Barangay 41-Bogtong", "Barangay 42-Rawis", "Barangay 43-Tamaoyan", "Barangay 44-Pawa", "Barangay 45-Dita", "Barangay 46-San Joaquin", "Barangay 47-Arimbay", "Barangay 48-Bagong Abre", "Barangay 49-Bigaa", "Barangay 4-Sagpon Poblacion", "Barangay 50-Padang", "Barangay 51-Buyuan", "Barangay 52-Matanag", "Barangay 53-Bonga", "Barangay 54-Mabinit", "Barangay 55-Estanza", "Barangay 56-Taysan", "Barangay 57-Dap-dap", "Barangay 58-Buragwis", "Barangay 59-Puro", "Barangay 5-Sagmin Poblacion", "Barangay 60-Lamba", "Barangay 61-Maslog", "Barangay 62-Homapon", "Barangay 63-Mariawa", "Barangay 64-Bagacay", "Barangay 65-Imalnod", "Barangay 66-Banquerohan", "Barangay 67-Bariis", "Barangay 68-San Francisco", "Barangay 69-Buenavista", "Barangay 6-Bañadero Poblacion", "Barangay 70-Cagbacong", "Barangay 7-Baño", "Barangay 8-Bagumbayan", "Barangay 9-Pinaric"};
    string LigaoBrgys[] = {"Abella", "Allang", "Amtic", "Bacong", "Bagumbayan", "Balanac", "Baligang", "Barayong", "Basag", "Batang", "Bay", "Binanowan", "Binatagan", "Bobonsuran", "Bonga", "Busac", "Busay", "Cabarian", "Calzada", "Catburawan", "Cavasi", "Culliat", "Dunao", "Francia", "Guilid", "Herrera", "Layon", "Macalidong", "Mahaba", "Malama", "Maonon", "Nabonton", "Nasisi", "Oma-oma", "Palapas", "Pandan", "Paulba", "Paulog", "Pinamaniquian", "Pinit", "Ranao-ranao", "San Vicente", "Santa Cruz", "Tagpo", "Tambo", "Tandarura", "Tastas", "Tinago", "Tinampo", "Tiongson", "Tomolin", "Tuburan", "Tula-tula Grande", "Tula-tula Pequeño", "Tupas"};
    string TabacoBrgys[] = {"Agnas", "Bacolod", "Bangkilingan", "Bantayan", "Baranghawon", "Basagan", "Basud", "Bogñabong", "Bombon", "Bonot", "Buang", "Buhian", "Cabagñan", "Cobo", "Comon", "Cormidal", "Divino Rostro", "Fatima", "Guinobat", "Hacienda", "Magapo", "Mariroc", "Matagbac", "Oras", "Oson", "Panal", "Pawa", "Pinagbobong", "Quinale Cabasan", "Quinastillojan", "Rawis", "Sagurong", "Salvacion", "San Antonio", "San Carlos", "San Isidro", "San Juan", "San Lorenzo", "San Ramon", "San Roque", "San Vicente", "Santo Cristo", "Sua-Igot", "Tabiguian", "Tagas", "Tayhi", "Visita"};
    string IrigaBrgys[] = {"Antipolo", "Cristo Rey", "Del Rosario", "Francia", "La Anunciacion", "La Medalla", "La Purisima", "La Trinidad", "Niño Jesus", "Perpetual Help", "Sagrada", "Salvacion", "San Agustin", "San Andres", "San Antonio", "San Francisco", "San Isidro", "San Jose", "San Juan", "San Miguel", "San Nicolas", "San Pedro", "San Rafael", "San Ramon", "San Roque", "San Vicente Norte", "San Vicente Sur", "Santa Cruz Norte", "Santa Cruz Sur", "Santa Elena", "Santa Isabel", "Santa Maria", "Santa Teresita", "Santiago", "Santo Domingo", "Santo Niño"};
    string NagaBrgys[] = {"Abella", "Bagumbayan Norte", "Bagumbayan Sur", "Balatas", "Calauag", "Cararayan", "Carolina", "Concepcion Grande", "Concepcion Pequeña", "Dayangdang", "Del Rosario", "Dinaga", "Igualdad Interior", "Lerma", "Liboton", "Mabolo", "Pacol", "Panicuason", "Peñafrancia", "Sabang", "San Felipe", "San Francisco", "San Isidro", "Santa Cruz", "Tabuco", "Tinago", "Triangulo"};
    string CamarinesSurMuni[] = {"Baao", "Balatan", "Bato", "Bombon", "Buhi", "Bula", "Cabusao", "Calabanga", "Camaligan", "Canaman", "Caramoan", "Del Gallego", "Gainza", "Garchitorena", "Goa", "Lagonoy", "Libmanan", "Lupi", "Magarao", "Milaor", "Minalabac", "Nabua", "Ocampo", "Pamplona", "Pasacao", "Pili", "Presentacion", "Ragay", "Sagñay", "San Fernando", "San Jose", "Sipocot", "Siruma", "Tigaon", "Tinambac"};
    string MasbateCityBrgys[] = {"Anas", "Asid", "B. Titong", "Bagumbayan", "Bantigue", "Bapor", "Batuhan", "Bayombon", "Biyong", "Bolo", "Cagay", "Cawayan Exterior", "Cawayan Interior", "Centro", "Espinosa", "F. Magallanes", "Ibingay", "Igang", "Kalipay", "Kinamaligan", "Malinta", "Mapiña", "Mayngaran", "Nursery", "Pating", "Pawa", "Sinalongan", "Tugbo", "Ubongan Dacu", "Usab"};
    string MasbateProvMuni[] = {"Aroroy", "Baleno", "Balud", "Batuan", "Cataingan", "Cawayan", "Claveria", "Dimasalang", "Esperanza", "Mandaon", "Milagros", "Mobo", "Monreal", "Palanas", "Pio V. Corpuz", "Placer", "San Fernando", "San Jacinto", "San Pascual", "Uson"};
    string SorsogonCityBrgys[] = {"Abuyog", "Almendras-Cogon", "Balete", "Balogo (Sorsogon East District)", "Balogo (Bacon District)", "Barayong", "Basud", "Bato", "Bibincahan", "Bitan-o/Dalipay", "Bogña", "Bon-ot", "Bucalbucalan", "Buenavista", "Buenavista (Bacon District)", "Buhatan", "Bulabog", "Burabod", "Cabarbuhan", "Cabid-an", "Cambulaga", "Capuy", "Caricaran", "Del Rosario", "Gatbo", "Gimaloto", "Guinlajon", "Jamislagan", "Macabog", "Maricrum", "Marinas", "Osiao", "Pamurayan", "Pangpang", "Panlayaan", "Peñafrancia", "Piot", "Poblacion", "Polvorista", "Rawis", "Rizal", "Salog", "Salvacion", "Salvacion (Bacon District)", "Sampaloc", "San Isidro", "San Isidro (Bacon District)", "San Juan (Roro)", "San Juan (Bacon District)", "San Pascual", "San Ramon", "San Roque", "San Vicente", "Santa Cruz", "Santa Lucia", "Santo Domingo", "Santo Niño", "Sawanga", "Sirangan", "Sugod", "Sulucan", "Talisay", "Ticol", "Tugos"};
    string BacolodBrgys[] = {"Alangilan", "Alijis", "Banago", "Barangay 1", "Barangay 10", "Barangay 11", "Barangay 12", "Barangay 13", "Barangay 14", "Barangay 15", "Barangay 16", "Barangay 17", "Barangay 18", "Barangay 19", "Barangay 2", "Barangay 20", "Barangay 21", "Barangay 22", "Barangay 23", "Barangay 24", "Barangay 25", "Barangay 26", "Barangay 27", "Barangay 28", "Barangay 29", "Barangay 3", "Barangay 30", "Barangay 31", "Barangay 32", "Barangay 33", "Barangay 34", "Barangay 35", "Barangay 36", "Barangay 37", "Barangay 38", "Barangay 39", "Barangay 4", "Barangay 40", "Barangay 41", "Barangay 5", "Barangay 6", "Barangay 7", "Barangay 8", "Barangay 9", "Bata", "Cabug", "Estefania", "Felisa", "Granada", "Handumanan", "Mandalagan", "Mansilingan", "Montevista", "Pahanocoy", "Punta Taytay", "Singcang-Airport", "Sum-ag", "Taculing", "Tangub", "Villamonte", "Vista Alegre"};
    string RoxasCityBrgys[] = {"Adlawan", "Bago", "Balijuagan", "Banica", "Barra", "Bato", "Baybay", "Bolo", "Cabugao", "Cagay", "Cogon", "Culajao", "Culasi", "Dayao", "Dinginan", "Dumolog", "Gabu-an", "Inzo Arnaldo Village", "Jumaguicjic", "Lanot", "Lawa-an", "Libas", "Liong", "Loctugan", "Lonoy", "Milibili", "Mongpong", "Olotayan", "Poblacion I", "Poblacion II", "Poblacion III", "Poblacion IV", "Poblacion IX", "Poblacion V", "Poblacion VI", "Poblacion VII", "Poblacion VIII", "Poblacion X", "Poblacion XI", "Punta Cogon", "Punta Tabuc", "San Jose", "Sibaguan", "Talon", "Tanque", "Tanza", "Tiza"};
    string IloiloCityBrgys[] = {"Abeto Mirasol Taft South", "Aguinaldo", "Airport", "Alalasan Lapuz", "Arguelles", "Arsenal Aduana", "Bakhaw", "Balabago", "Balantang", "Baldoza", "Bantud", "Banuyao", "Baybay Tanza", "Benedicto", "Bito-on", "Bolilao", "Bonifacio", "Bonifacio Tanza", "Buhang", "Buhang Taft North", "Buntatala", "Burgos-Mabini-Plaza", "Caingin", "Calahunan", "Calaparan", "Calubihan", "Calumpang", "Camalig", "Cochero", "Compania", "Concepcion-Montes", "Cuartero", "Cubay", "Danao", "Delgado-Jalandoni-Bagumbayan", "Democracia", "Desamparados", "Divinagracia", "Don Esteban-Lapuz", "Dulonan", "Dungon", "Dungon A", "Dungon B", "East Baluarte", "East Timawa", "Edganzon", "El 98 Castilla", "Fajardo", "Flores", "General Hughes-Montes", "Gloria", "Gustilo", "Guzman-Jesena", "Habog-habog Salvacion", "Hibao-an Norte", "Hibao-an Sur", "Hinactacan", "Hipodromo", "Inday", "Infante", "Ingore", "Jalandoni Estate-Lapuz", "Jalandoni-Wilson", "Javellana", "Jereos", "Kahirupan", "Kasingkasing", "Katilingban", "Kauswagan", "Laguda", "Lanit", "Lapuz Norte", "Lapuz Sur", "Legaspi dela Rama", "Liberation", "Libertad, Santa Isabel", "Libertad-Lapuz", "Loboc-Lapuz", "Lopez Jaena", "Lopez Jaena Norte", "Lopez Jaena Sur", "Luna (Jaro)", "Luna (La Paz)", "M. V. Hechanova", "Mabolo-Delgado", "Macarthur", "Magdalo", "Magsaysay", "Magsaysay Village", "Malipayon-Delgado", "Mansaya-Lapuz", "Marcelo H. del Pilar", "Maria Clara", "Maria Cristina", "Mohon", "Molo Boulevard", "Monica Blumentritt", "Montinola", "Muelle Loney-Montes", "Nabitasan", "Navais", "Nonoy", "North Avanceña", "North Baluarte", "North Fundidor", "North San Jose", "Obrero-Lapuz", "Oñate de Leon", "Ortiz", "Osmeña", "Our Lady of Fatima", "Our Lady of Lourdes", "Pale Benedicto Rizal", "PHHC Block 17", "PHHC Block 22 NHA", "Poblacion Molo", "President Roxas", "Progreso-Lapuz", "Punong-Lapuz", "Quezon", "Quintin Salas", "Railway", "Rima-Rizal", "Rizal", "Rizal Estanzuela", "Rizal Ibarra", "Rizal Palapala I", "Rizal Palapala II", "Roxas Village", "Sambag", "Sampaguita", "San Agustin", "San Antonio", "San Felix", "San Isidro (Jaro)", "San Isidro (La Paz)", "San Jose (Jaro)", "San Jose (Arevalo)", "San Jose (City Proper)", "San Juan", "San Nicolas", "San Pedro (Molo)", "San Pedro (Jaro)", "San Rafael", "San Roque", "San Vicente", "Santa Cruz", "Santa Filomena", "Santa Rosa", "Santo Domingo", "Santo Niño Norte", "Santo Niño Sur", "Santo Rosario-Duran", "Seminario", "Simon Ledesma", "Sinikway", "So-oc", "South Baluarte", "South Fundidor", "South San Jose", "Taal", "Tabuc Suba (Jaro)", "Tabuc Suba (La Paz)", "Tabucan", "Tacas", "Tagbac", "Tanza-Esperanza", "Tap-oc", "Taytay Zone II", "Ticud", "Timawa Tanza I", "Timawa Tanza II", "Ungka", "Veterans Village", "Villa Anita", "West Habog-habog", "West Timawa", "Yulo Drive", "Yulo-Arroyo", "Zamora-Melliza"};
    string PassiBrgys[] = {"Agdahon", "Agdayao", "Aglalana", "Agtabo", "Agtambo", "Alimono", "Arac", "Ayuyan", "Bacuranan", "Bagacay", "Batu", "Bayan", "Bitaogan", "Buenavista", "Buyo", "Cabunga", "Cadilang", "Cairohan", "Dalicanan", "Gegachac", "Gemat-y", "Gemumua-agahon", "Gines Viejo", "Imbang Grande", "Jaguimitan", "Libo-o", "Maasin", "Magdungao", "Malag-it Grande", "Malag-it Pequeño", "Mambiranan Grande", "Mambiranan Pequeño", "Man-it", "Mantulang", "Mulapula", "Nueva Union", "Pagaypay", "Pangi", "Poblacion Ilawod", "Poblacion Ilaya", "Punong", "Quinagaringan Grande", "Quinagaringan Pequeño", "Sablogon", "Salngan", "Santo Tomas", "Sarapan", "Tagubong", "Talongonan", "Tubod", "Tuburan"};
    string IloiloProvMuni[] = {"Ajuy", "Alimodian", "Anilao", "Badiangan", "Balasan", "Banate", "Barotac Nuevo", "Barotac Viejo", "Batad", "Bingawan", "Cabatuan", "Calinog", "Carles", "Concepcion", "Dingle", "Dueñas", "Dumangas", "Estancia", "Guimbal", "Igbaras", "Janiuay", "Lambunao", "Leganes", "Lemery", "Leon", "Maasin", "Miagao", "Mina", "New Lucena", "Oton", "Pavia", "Pototan", "San Dionisio", "San Enrique", "San Joaquin", "San Miguel", "San Rafael", "Santa Barbara", "Sara", "Tigbauan", "Tubungan", "Zarraga"};
    string BagoBrgys[] = {"Abuanan", "Alianza", "Atipuluan", "Bacong-Montilla", "Bagroy", "Balingasag", "Binubuhan", "Busay", "Calumangan", "Caridad", "Dulao", "Ilijan", "Jorge L. Araneta", "Lag-asan", "Ma-ao Barrio", "Mailum", "Malingin", "Napoles", "Pacol", "Poblacion", "Sagasa", "Sampinit", "Tabunan", "Taloc"};
    string CadizBrgys[] = {"Andres Bonifacio", "Banquerohan", "Barangay 1 Poblacion", "Barangay 2 Poblacion", "Barangay 3 Poblacion", "Barangay 4 Poblacion", "Barangay 5 Poblacion", "Barangay 6 Poblacion", "Burgos", "Cabahug", "Cadiz Viejo", "Caduha-an", "Celestino Villacin", "Daga", "Jerusalem", "Luna", "Mabini", "Magsaysay", "Sicaba", "Tiglawigan", "Tinampa-an", "V. F. Gustilo"};
    string EscalanteBrgys[] = {"Alimango", "Balintawak", "Binaguiohan", "Buenavista", "Cervantes", "Dian-ay", "Hacienda Fe", "Japitan", "Jonobjonob", "Langub", "Libertad", "Mabini", "Magsaysay", "Malasibog", "Old Poblacion", "Paitan", "Pinapugasan", "Rizal", "Tamlang", "Udtongan", "Washington"};
    string HimamaylanBrgys[] = {"Aguisan", "Barangay I", "Barangay II", "Barangay III", "Barangay IV", "Buenavista", "Cabadiangan", "Cabanbanan", "Carabalan", "Caradio-an", "Libacao", "Mahalang", "Mambagaton", "Nabali-an", "San Antonio", "Sara-et", "Su-ay", "Talaban", "To-oy"};
    string KabankalanBrgys[] = {"Bantayan", "Barangay 1", "Barangay 2", "Barangay 3", "Barangay 4", "Barangay 5", "Barangay 6", "Barangay 7", "Barangay 8", "Barangay 9", "Binicuil", "Camansi", "Camingawan", "Camugao", "Carol-an", "Daan Banua", "Hilamonan", "Inapoy", "Linao", "Locotan", "Magballo", "Oringao", "Orong", "Pinaguinpinan", "Salong", "Tabugon", "Tagoc", "Tagukon", "Talubangi", "Tampalon", "Tan-awan", "Tapi"};
    string LaCarlotaBrgys[] = {"Ara-al", "Ayungon", "Balabag", "Barangay I", "Barangay II", "Barangay III", "Batuan", "Cubay", "Haguimit", "La Granja", "Nagasi", "Roberto S. Benedicto", "San Miguel", "Yubo"};
    string SagayBrgys[] = {"Andres Bonifacio", "Bato", "Baviera", "Bulanon", "Campo Himoga-an", "Campo Santiago", "Colonia Divina", "Fabrica", "General Luna", "Himoga-an Baybay", "Lopez Jaena", "Makiling", "Malubon", "Molocaboc", "Old Sagay", "Paraiso", "Plaridel", "Poblacion I", "Poblacion II", "Puey", "Rafaela Barrera", "Rizal", "Taba-ao", "Tadlong", "Vito"};
    string SanCarlosNegrosBrgys[] = {"Bagonbon", "Barangay I", "Barangay II", "Barangay III", "Barangay IV", "Barangay V", "Barangay VI", "Buluangan", "Codcod", "Ermita", "Guadalupe", "Nataban", "Palampas", "Prosperidad", "Punao", "Quezon", "Rizal", "San Juan"};
    string SilayBrgys[] = {"Bagtic", "Balaring", "Barangay I", "Barangay II", "Barangay III", "Barangay IV", "Barangay V", "Barangay VI Poblacion", "Eustaquio Lopez", "Guimbala-on", "Guinhalaran", "Kapitan Ramon", "Lantad", "Mambulac", "Patag", "Rizal"};
    string SipalayBrgys[] = {"Barangay 1", "Barangay 2", "Barangay 3", "Barangay 4", "Barangay 5", "Cabadiangan", "Camindangan", "Canturay", "Cartagena", "Cayhagan", "Gil Montilla", "Mambaroto", "Manlucahoc", "Maricalum", "Nabulao", "Nauhang", "San Jose"};
    string TalisayBrgys[] = {"Bubog", "Cabatangan", "Concepcion", "Dos Hermanas", "Efigenio Lizares", "Katilingban", "Matab-ang", "San Fernando", "Zone 1", "Zone 10", "Zone 11", "Zone 12", "Zone 12-A", "Zone 14", "Zone 14-A", "Zone 14-B", "Zone 15", "Zone 16", "Zone 2", "Zone 3", "Zone 4", "Zone 4-A", "Zone 5", "Zone 6", "Zone 7", "Zone 8", "Zone 9"};
    string VictoriasBrgys[] = {"Barangay I", "Barangay II", "Barangay III", "Barangay IV", "Barangay IX", "Barangay V", "Barangay VI", "Barangay VI-A", "Barangay VII", "Barangay VIII", "Barangay X", "Barangay XI", "Barangay XII", "Barangay XIII", "Barangay XIV", "Barangay XIX", "Barangay XIX-A", "Barangay XV", "Barangay XV-A", "Barangay XVI", "Barangay XVI-A", "Barangay XVII", "Barangay XVIII", "Barangay XVIII-A", "Barangay XX", "Barangay XXI"};
    string BoholMuni[] = {"Alburquerque", "Alicia", "Anda", "Antequera", "Baclayon", "Balilihan", "Batuan", "Bien Unido", "Bilar", "Buenavista", "Calape", "Candijay", "Carmen", "Catigbian", "Clarin", "Corella", "Cortes", "Dagohoy", "Danao", "Dauis", "Dimiao", "Duero", "Garcia Hernandez", "Getafe", "Guindulman", "Inabanga", "Jagna", "Lila", "Loay", "Loboc", "Loon", "Mabini", "Maribojoc", "Panglao", "Pilar", "President Carlos P. Garcia", "Sagbayan", "San Isidro", "San Miguel", "Sevilla", "Sierra Bullones", "Sikatuna", "Talibon", "Trinidad", "Tubigon", "Ubay", "Valencia"};

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
        cout << "3. Region III - Central Luzon" << endl;
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

                            cout << "Would you like to find out more about the cities and the barangays within it? (Y/N): ";
                            cin >> citybarangays;
                            
                                if (citybarangays == 'Y' || citybarangays == 'y'){
                                int barangays;
                                cout << "Enter a number corresponding to a city to get information about it and its barangays: ";
                                cin >> barangays;
                                switch (barangays){
                            
                                case 1: {
                                int barangayCount = sizeof(LaoagBrgys)/sizeof(LaoagBrgys[0]);
                                cout << "You have chosen Laoag. \n";
                                cout << "Mayor: Michael Marcos Keon";
                                cout << "The City of Laoag is a 3rd class component city and it's the capital of Ilocos Norte. The word Laoag means 'light' which is why Laoag is also called Sunshine city. Laoag is the largest city in northern luzon and it's a trade centre for an agricultural region producing corn (maize), rice, and tobacco, the city has warehouses, wholesale outlets, and several cigarette factories.\n";
                                cout << "According to the 2020 census, its total population is 111,651.\n";
                                cout << "The City of Laoag's ZIP code is 2900.\n";
                                cout << "Mayor: Michael Marcos Keon";
                                cout << "Here are all the barangays in Laoag:\n";
                                for (int i = 0; i < barangayCount; ++i) {
                                cout << i + 1 << ". " << LaoagBrgys[i] << "\n";
                                }
                                break;
                                }
                                
                                case 2: {
                                int barangayCount = sizeof(BatacBrgys)/sizeof(BatacBrgys[0]);
                                cout << "You have chosen Batac. \n";
                                cout << "Mayor: Albert D. Chua\n";
                                cout << "The City of Batac is a 5th class component city. It is the birthplace of Gregorio Aglipay, the founder of the Philippine Independent Church, also known as the Aglipayan Church, and also to General Artemio Ricarte, often known as the father of the Philippine Army."; 
                                cout << "According to the 2020 census, its total population is 55,484.\n";
                                cout << "The City of Batac's ZIP code is 2906\n";         
                                cout << "Here are all the barangays in Batac: \n";
                                for (int i = 0; i < barangayCount; ++i) {
                                cout << i + 1 << ". " << BatacBrgys[i] << "\n";
                                }
                                
                                break;
                                }
                                
                                }
                                
                                }
                            }
                            else if (cmb == 'M' || cmb == 'M'){//IFMUNICIPALITIES
                            int muniCount = sizeof(IlocosNorMuni)/sizeof(IlocosNorMuni[0]);
                            char municipal;
                            cout << "Here are all the Municipalities in Ilocos Norte: " << endl;

                            for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << IlocosNorMuni[i] << "\n";
                            }

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
                        int barangayCount = sizeof(ViganBrgys)/sizeof(ViganBrgys[0]);
                        cout << "You have chosen Vigan. \n";
                        cout << "Mayor: Ferdinand C. Medina\n";
                        cout << "The City of Vigan is a 4th class component city and it's the capital of the province of Ilocos Sur. It's name during the Spanish Foundation was Villa Fernandina or Town of Ferdinand. Vigan is unique for having preserved much of its Hispanic colonial character, particularly its grid street pattern and historic urban lay out. Its significance also lies on how the different architectural influences are blended to create a homogenous townscape.\n";
                        cout << "The City of Vigan's ZIP code is 2700.\n";
                        cout << "According to the 2020 census, it's total population is 53,935.\n";
                        cout << "Here are all the barangays in Vigan. \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << ViganBrgys[i] << "\n";
                        }
                        break;
                        }
                        
                        case 2: {
                        int barangayCount = sizeof(CandonBrgys)/sizeof(CandonBrgys[0]);
                        cout << "You have chosen Candon. \n";
                        cout << "Mayor: Eric Dario Singson\n";
                        cout << "The City of Candon is a 4th class component city and it is dubbed as the Tobacco Capital of the Phiippines. The word 'CANDON' comes from 'CANDONG', which the natives gave to a big tree in the village around which life, culture, and beauty is centered. It is the foremost trading center in the second district of Ilocos Sur.\n";
                        cout << "The city of Candon's ZIP code is 2710.\n";
                        cout << "According to the 2020 census, it's total population is 61,432.\n";
                        cout << "Here are all the barangays in Candon. \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CandonBrgys[i] << "\n";
                        }
                        break;
                        }

                        default: {
                        cout << "There are only 2 cities in Ilocos Sur. Invalid Input. " << endl;
                        }
                        }

                        }
                        } //IFCITIES

                        else if (cmb == 'M' || cmb == 'm'){ //IFMUNICIPALITIES
                        int muniCount = sizeof(IlocosSurMuni)/sizeof(IlocosSurMuni[0]);
                        char municipal;
                        cout << "Here are all the Municipalities in Ilocos Sur: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << IlocosSurMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
	                    if (municipal == 'Y' || municipal == 'y'){
	                    int barangays;
                                
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
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
                            cout << "San Fernando - Capital City and the Regional Center of Ilocos";

                            cout << "Would you like to find out more about San Fernando and the barangays within it? (Y/N): ";
                            cin >> citybarangays;

                            if (citybarangays == 'Y' || citybarangays == 'y'){
                            int barangayCount = sizeof(SanFernandoBrgys)/sizeof(SanFernandoBrgys[0]);
                            cout << "Mayor: Hermenegildo A. Gualberto" << endl;
                            cout << "The City of San Fernando is a 3rd class component city. It became the 'cabecera' or provincial capital on the same day that La Union became a province in 1850. It serves as the gateway to trade and commerce to the North and the culture and heritage of Ilocandia.\n";
                            cout << "The City of San Fernando's ZIP code is 2500.\n";
                            cout << "According to the 2020 census, its population is 125,640.\n";
                            cout << "Here are all the barangays in San Fernando: " << endl;
                            for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SanFernandoBrgys[i] << "\n";
                            }
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

                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;

                            switch (barangays){
                            case 1:{
                            cout << "You have chosen the municipality of Agoo.\n";
                            break;
                            }

                            case 2:{
                            cout << "You have chosen the municipality of Aringay.\n";
                            break;
                            }

                            case 3:{
                            cout << "You have chosen the municipality of Bacnotan.\n";
                            break;
                            }
                            
                            case 4:{
                            cout << "You have chosen the municipality of Agoo.\n";
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
                            int barangayCount = sizeof(AlaminosBrgys)/sizeof(AlaminosBrgys[0]);
                            cout << "You have chosen Alaminos.\n";
                            cout << "Mayor: Arthur del Fierro Celeste\n";
                            cout << "The City of Alaminos is a 4th class component city. It is known for the world-renowned Hundred Islands National Park which is composed of 124 islands, the Cuenco Cave, Pilgrimage Island, Children's Island, and Bolo Beach.\n";
                            cout << "The City of Alaminos' ZIP code is 2404.\n";
                            cout << "According to the 2020 census, its total population is 99,397.\n";
                            cout << "Here are all the barangays in Alaminos:\n";
                            for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << AlaminosBrgys[i] << "\n";
                            }
                            break;
                            }

                            case 2: {
                            int barangayCount = sizeof(DagupanBrgys)/sizeof(DagupanBrgys[0]);
                            cout << "You have chosen of Dagupan.\n";
                            cout << "Mayor: Belen T. Fernandez\n";
                            cout << "The City of Dagupan is a 1st class independent component city located in the province of Pangasinan. It is known as the Bangus Capital of the Philippines and it is a major commercial and financial center north of Manila.\n";
                            cout << "The City of Dagupan's ZIP code is 2400.\n";
                            cout << "According to the 2020 census, its total population is 174,302.\n";
                            cout << "Here are all the barangays in Dagupan:\n";
                            for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << DagupanBrgys[i] << "\n";
                            }
                            break;
                            }
                            
                            case 3:{
                            int barangayCount = sizeof(SanCarlosBrgys)/sizeof(SanCarlosBrgys[0]);
                            cout << "You have chosen San Carlos.\n";
                            cout << "Mayor: Julier Resuello\n";
                            cout << "The City of San Carlos is a 3rd class component city and it is a major trading center of bamboo and the best producer of carabao mangoes.\n";
                            cout << "The City of San Carlos' ZIP code is 2420.\n";
                            cout << "According to the 2020 census, its total population is 205,424.\n";
                            cout << "Here are all the barangays in San Carlos:\n";
                            for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SanCarlosBrgys[i] << "\n";
                            }
                            break;
                            }

                            case 4:{
                            int barangayCount = sizeof(UrdanetaBrgys)/sizeof(UrdanetaBrgys[0]);
                            cout << "You have chosen Urdaneta.\n";
                            cout << "Mayor: Julio Parayno III\n";
                            cout << "The City of Urdaneta is a 2nd class component city and it is among the region's cleanest, greenest, and most livable cities. It is a trading hub of Pangasinan and such, there is a 'BAGSAKAN' or trading post for most fruits and vegetables.\n";
                            cout << "The City of Urdaneta's ZIP code is 2428.\n";
                            cout << "According to the 2020 census, its total population is 144,577.\n";
                            cout << "Here are all the barangays in Urdaneta:\n";
                            for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << UrdanetaBrgys[i] << "\n";
                            }
                            break;
                            }

                            default:{
                            cout << "There are only 4 cities. Invalid input.\n";
                        
                            }
                            }
                            }
                            }

                            else if (cmb == 'M' || cmb == 'm'){
                            int muniCount = sizeof(PangasinanMuni)/sizeof(PangasinanMuni[0]);
                            char municipal;
                            cout << "Here are all the municipalities in Pangasinan: " << endl;
                            for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << PangasinanMuni[i] << "\n";
                            }

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
                            int barangayCount = sizeof(TuguegaraoBrgys)/sizeof(TuguegaraoBrgys[0]);
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
                            for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TuguegaraoBrgys[i] << "\n";
                            }
                            }

                            }

                            else if(cmb == 'M' || cmb == 'm'){
                            int muniCount = sizeof(CagayanMuni)/sizeof(CagayanMuni[0]);
                            char municipal;
                            cout << "Here are all the municipalities in Cagayan: " << endl;
                            for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << CagayanMuni[i] << "\n";
                            }

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
                        int barangayCount = sizeof(CauayanBrgys)/sizeof(CauayanBrgys[0]);
                        cout << "You have chosen the city of Cauayan.\n";
                        cout << "Mayor: Caesar 'Jaycee' Dy Jr.\n";
                        cout << "The City of Cauayan is a 2nd class component city. Isabela is home to Magat High Rise Dam and Tourism Complex known to be the highest and biggest dam in Asia at the time of its construction. Isabela comprises an aggregate land area of 10,665 square kilometers, representing almost 40 percent of the regional territory.\n";
                        cout << "The City of Cauayan's ZIP code is 3305.\n";
                        cout << "According to the 2020 census, its total population is 143,403.\n";
                        cout << "Here are all the barangays in Cauayan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CauayanBrgys[i] << "\n";
                        }
                        break;
                        }
                        
                        case 2:{
                        int barangayCount = sizeof(IlaganBrgys)/sizeof(IlaganBrgys[0]);
                        cout << "You have chosen the city of Ilagan.\n";
                        cout << "Mayor: Evelyn C. Diaz.\n";
                        cout << "The City of Ilagan is a 1st class component city and the capital of Isabela. It is also known as the Corn Capital of the Philippines, holds an ASEAN Clean Tourist City, and the safest place to conduct a sports event. \n";
                        cout << "The City of Ilagan's ZIP code is 3300.\n";
                        cout << "According to the 2020 census, its total population is 158,218.\n";
                        cout << "Here are all the barangays in Ilagan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << IlaganBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 3:{
                        int barangayCount = sizeof(SantiagoBrgys)/sizeof(SantiagoBrgys[0]);
                        cout << "You have chosen the city of Santiago\n";
                        cout << "Mayor: Alyssa Sheena T. Dy\n";
                        cout << "The City of Santiago is home to several business enterprises, banking institutions, educational entities, as well as manufacturing companies. It is considered as the Commercial and Industrial Center of Cagayan Valley.\n";
                        cout << "The City of Santiago's ZIP code is 3311.\n";
                        cout << "According to the 2020 census, its total population is 148,580.\n";
                        cout << "Here are all the barangays in Santiago: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SantiagoBrgys[i] << "\n";
                        }

                        break;
                        }

                        default:{
                        
                        break;
                        }
                        }
                        }
                        }//CITIESISABELA

                        else if(cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(IsabelaMuni)/sizeof(IsabelaMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Isabela: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << IsabelaMuni[i] << "\n";
                        }

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
	                    cout << "You have chosen the municipality of Quezon.\n";
	                    
	                    break;
	                    }

                        case 20:{
	                    cout << "You have chosen the municipality of Quirino.\n";
	                    
	                    break;
	                    }

                        case 21:{
	                    cout << "You have chosen the municipality of Ramon.\n";
	                    
	                    break;
	                    }

                        case 22:{
	                    cout << "You have chosen the municipality of Reina Mercedes.\n";
	                    
	                    break;
	                    }

                        case 23:{
	                    cout << "You have chosen the municipality of Roxas.\n";
	                    
	                    break;
	                    }

                        case 24:{
	                    cout << "You have chosen the municipality of San Agustin.\n";
	                    
	                    break;
	                    }

                        case 25:{
	                    cout << "You have chosen the municipality of San Guillermo.\n";
	                    
	                    break;
	                    }

                        case 26:{
	                    cout << "You have chosen the municipality of San Isidro.\n";
	                    
	                    break;
	                    }

                        case 27:{
	                    cout << "You have chosen the municipality of San Manuel.\n";
	                    
	                    break;
	                    }

                        case 28:{
	                    cout << "You have chosen the municipality of San Mariano.\n";
	                    
	                    break;
	                    }

                        case 29:{
	                    cout << "You have chosen the municipality of San Matero.\n";
	                    
	                    break;
	                    }

                        case 30:{
	                    cout << "You have chosen the municipality of San Pablo.\n";
	                    
	                    break;
	                    }

                        case 31:{
	                    cout << "You have chosen the municipality of Santa Maria.\n";
	                    
	                    break;
	                    }

                        case 32:{
	                    cout << "You have chosen the municipality of Santo Tomas.\n";
	                    
	                    break;
	                    }

                        case 33:{
	                    cout << "You have chosen the municipality of Tumauini.\n";
	                    
	                    break;
	                    }

                        default:{
                        cout << "There are only 33 municipalities in Isabela.";
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
                        cout << "6. Bayombong - Capital of Nueva Viscaya\n";
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
                                
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of Alfonso Castañeda.\n";
	                    
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of Ambaguio.\n";
	                    
	                    break;
	                    }
                        
                        case 3:{
	                    cout << "You have chosen the municipality of Aritao.\n";
	                    
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of Bagabag.\n";
	                    
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of Bambang.\n";
	                    
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of Bayombong.\n";
	                    
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of Diadi.\n";
	                    
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of Dupax Del Norte.\n";
	                    
	                    break;
	                    }

                        case 9:{
	                    cout << "You have chosen the municipality of Dupax Del Sur.\n";
	                    
	                    break;
	                    }

                        case 10:{
	                    cout << "You have chosen the municipality of Kasibu.\n";
	                    
	                    break;
	                    }

                        case 11:{
	                    cout << "You have chosen the municipality of Kayapa.\n";
	                    
	                    break;
	                    }

                        case 12:{
	                    cout << "You have chosen the municipality of Quezon.\n";
	                    
	                    break;
	                    }

                        case 13:{
	                    cout << "You have chosen the municipality of Santa Fe.\n";
	                    
	                    break;
	                    }

                        case 14:{
	                    cout << "You have chosen the municipality of Solano.\n";
	                    
	                    break;
	                    }

                        case 15:{
	                    cout << "You have chosen the municipality of Villaverde.\n";
	                    
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
                                
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of Aglipay.\n";
	                    
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of Cabarroguis.\n";
	                    
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of Diffun.\n";
	                    
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of Maddela.\n";
	                    
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of Nagtipunan.\n";
	                    
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of Sagudav.\n";
	                    
	                    break;
	                    }

                        default:{
                        cout << "There are only 6 municipalities in Quezon.\n";
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
                        cout << "1. Baler - Capital of Aurora\n";
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
                                
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of Aurora.\n";
	                    
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of Casiguran.\n";
	                    
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of Dilasag.\n";
	                    
	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of Dinalungan.\n";
	                    
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of Dingalan.\n";
	                    
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of Dipaculao.\n";
	                    
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of Maria Aurora.\n";
	                    
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of San Luis.\n";
	                    
	                    break;
	                    }

                        default:{
                        cout << "There are only 8 municipalities in Aurora.\n";
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

                        cout << "Would you like to find out more about Bataan and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(BalangaBrgys)/sizeof(BalangaBrgys[0]);
                        cout << "You have chosen the city of Balanga.\n";
                        cout << "Mayor: Francis Anthony S. Garcia\n";
                        cout << "The City of Balanga is a 2nd class component city. It is the center of commerce and industry and is one of the richest towns in Bataan. It is also known for the Balanga Cathedral and the Balanga City Plaza.\n";
                        cout << "The City of Balanga's ZIP code is 2100.\n";
                        cout << "According to the 2020 census, its total population is 104,173.\n";
                        cout << "Here are all the barangays in Balanga:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BalangaBrgys[i] << "\n";
                        }
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
                                
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                 
                        switch (barangays){
	                    case 1:{
	                    cout << "You have chosen the municipality of Abucay.\n";
	                    
	                    break;
	                    }

                        case 2:{
	                    cout << "You have chosen the municipality of Bagac.\n";
	                    
	                    break;
	                    }

                        case 3:{
	                    cout << "You have chosen the municipality of Dinalupihan.\n";
	                    

	                    break;
	                    }

                        case 4:{
	                    cout << "You have chosen the municipality of Hermosa.\n";
	                    
	                    break;
	                    }

                        case 5:{
	                    cout << "You have chosen the municipality of Limay.\n";
	                    
	                    break;
	                    }

                        case 6:{
	                    cout << "You have chosen the municipality of Mariveles.\n";
	                    
	                    break;
	                    }

                        case 7:{
	                    cout << "You have chosen the municipality of Morong.\n";
	                    
	                    break;
	                    }

                        case 8:{
	                    cout << "You have chosen the municipality of Orani.\n";
	                    
	                    break;
	                    }
                        
                        case 9:{
	                    cout << "You have chosen the municipality of Orion.\n";
	                    
	                    break;
	                    }

                        case 10:{
	                    cout << "You have chosen the municipality of Pilar.\n";
	                    
	                    break;
	                    }

                        case 11:{
	                    cout << "You have chosen the municipality of Samal.\n";
	                    
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
                        cout << "3. Malolos - Capital of Bulacan\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(MeycauayanBrgys)/sizeof(MeycauayanBrgys[0]);
                        cout << "You have chosen the city of Meycauayan.\n";
                        cout << "Mayor: Henry R. Villarica\n";
                        cout << "The City of Meycauayan is a 1st class component city and is one of the oldest towns in Bulacan and in the entire Philippines. Meycauayan is rather known for their jewelry making, leather crafts, and their battery recycling industry.\n";
                        cout << "The City of Meycauayan's ZIP code is 3020.\n";
                        cout << "According to the 2020 census, its total population is 225,673.\n";
                        cout << "Here are all the barangays in Meycauayan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BalangaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(SJdMBrgys)/sizeof(SJdMBrgys[0]);
                        cout << "You have chosen the city of San Jose del Monte.\n";
                        cout << "Mayor: Arthus Robes\n";
                        cout << "The City of San Jose del Monte is a 1st class component city and it is known for its rich heritage, burgeoning economy, and lush landscapes. \n";
                        cout << "The City of San Jose del Monte's ZIP code is 3023.\n";
                        cout << "Here are all the barangays in San Jose del Monte: \n";
                        cout << "According to the 2020 census, its total population is 651,813.\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SJdMBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 3:{
                        int barangayCount = sizeof(MalolosBrgys)/sizeof(MalolosBrgys[0]);
                        cout << "You have chosen Malolos.\n";
                        cout << "Mayor: Christian D. Natividad\n";
                        cout << "The City of Malolos is a 1st class component city and the capital of Bulacan. Malolos was at the heart of Philippine nationalism and nation-building at the end of the 19th Century. The town was the site of the 1898 constitutional convention and the first Philippine Republic was established in Malolos, at the sanctuary of the Barasoain Church.\n";
                        cout << "The City of Malolos' ZIP code is 3000.\n";
                        cout << "According to the 2020 census, its total population is 261,189.\n";
                        cout << "Here are all the barangays in Malolos: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << MalolosBrgys[i] << "\n";
                        }
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
                        cout << "11. Marilao\n"; 
                        cout << "12. Norzagaray\n";
                        cout << "13. Pandi\n";
                        cout << "14. Paombong\n";
                        cout << "15. Plaridel\n";
                        cout << "16. Pulilan\n";
                        cout << "17. San Ildefonso\n";
                        cout << "18. San Miguel\n";
                        cout << "19. San Rafael\n";
                        cout << "20. Santa Maria\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                        cout << "2. Gapan\n";
                        cout << "3. Muñoz\n";
                        cout << "4. Palayan - Capital of Nueva Ecija\n";
                        cout << "5. San Jose\n";

                        cout << "Would you like to find out more about the cities and the barangays within it? (Y/N): ";
                        cin >> citybarangays;
                            
                            if (citybarangays == 'Y' || citybarangays == 'y'){
                            int barangays;
                            cout << "Enter a number corresponding to a city to get information about it and its barangays: ";
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
                            default:{
                            break;
                            }
                            }
                            }
                            }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(NuevaEcijaMuni)/sizeof(NuevaEcijaMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Nueva Ecija: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << NuevaEcijaMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1: {
                        cout << "You have chosen the municipality of Aliaga\n";
                        break;
                    }

                    case 2: {
                        cout << "You have chosen the municipality of Bongabon\n";
                        break;
                    }

                    case 3: {
                        cout << "You have chosen the municipality of Cabiao\n";
                        break;
                    }

                    case 4: {
                        cout << "You have chosen the municipality of Carranglan\n";
                        break;
                    }

                    case 5: {
                        cout << "You have chosen the municipality of Cuyapo\n";
                        break;
                    }

                    case 6: {
                        cout << "You have chosen the municipality of Gabaldon\n";
                        break;
                    }

                    case 7: {
                        cout << "You have chosen the municipality of General Mamerto Natividad\n";
                        break;
                    }

                    case 8: {
                        cout << "You have chosen the municipality of General Tinio\n";
                        break;
                    }

                    case 9: {
                        cout << "You have chosen the municipality of Guimba\n";
                        break;
                    }

                    case 10: {
                        cout << "You have chosen the municipality of Jaen\n";
                        break;
                    }

                    case 11: {
                        cout << "You have chosen the municipality of Laur\n";
                        break;
                    }

                    case 12: {
                        cout << "You have chosen the municipality of Licab\n";
                        break;
                    }

                    case 13: {
                        cout << "You have chosen the municipality of Llanera\n";
                        break;
                    }

                    case 14: {
                        cout << "You have chosen the municipality of Lupao\n";
                        break;
                    }

                    case 15: {
                        cout << "You have chosen the municipality of Nampicuan\n";
                        break;
                    }

                    case 16: {
                        cout << "You have chosen the municipality of Pantabangan\n";
                        break;
                    }

                    case 17: {
                        cout << "You have chosen the municipality of Peñaranda\n";
                        break;
                    }

                    case 18: {
                        cout << "You have chosen the municipality of Quezon\n";
                        break;
                    }

                    case 19: {
                        cout << "You have chosen the municipality of Rizal\n";
                        break;
                    }

                    case 20: {
                        cout << "You have chosen the municipality of San Antonio\n";
                        break;
                    }

                    case 21: {
                        cout << "You have chosen the municipality of San Isidro\n";
                        break;
                    }

                    case 22: {
                        cout << "You have chosen the municipality of San Leonardo\n";
                        break;
                    }

                    case 23: {
                        cout << "You have chosen the municipality of Santa Rosa\n";
                        break;
                    }

                    case 24: {
                        cout << "You have chosen the municipality of Santo Domingo\n";
                        break;
                    }

                    case 25: {
                        cout << "You have chosen the municipality of Talavera\n";
                        break;
                    }

                    case 26: {
                        cout << "You have chosen the municipality of Talugtug\n";
                        break;
                    }

                    case 27: {
                        cout << "You have chosen the municipality of Zaragoza\n";
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
                        cout << "1. San Fernando - Capital of Pampanga and Regional Center of Central Luzon\n";
                        cout << "2. Angeles - Highly Urbanized City and is thus considered independent.\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;
                        
                        switch(barangays){
                        case 1:{
                        int barangayCount = sizeof(SanFernandoPampangaBrgys)/sizeof(SanFernandoPampangaBrgys[0]);
                        cout << "You have chosen San Fernando.\n";
                        cout << "Mayor: Vilma B. Caluag\n";
                        cout << "The City of San Fernando is a 1st class component city and it is the capital of Pampanga and Regional Center of Central Luzon. It is known as the Christmas Capital of the Philippines. CNN once hailed the city as 'Asia's Christmas Capital'. A museum inside San Fernando marks the end point of the WWII Bataan Death March.\n";
                        cout << "The City of San Fernando's ZIP code is 2000.\n";
                        cout << "According to the 2020 census, its total population is 354,666.\n";
                        cout << "Here are all the barangays in San Fernando: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SanFernandoPampangaBrgys[i] << "\n";
                        }
                        break;
                        }
                        case 2:{
                        int barangayCount = sizeof(AngelesBrgys)/sizeof(AngelesBrgys[0]);
                        cout << "You have chosen Angeles.\n";
                        cout << "Mayor: Carmelo G. Lazatin Jr.\n";
                        cout << "The City of Angeles is a 1st class highly urbanized city and remains politically independent in the province of Pampanga. Old and historical buildings scatter around the landscape and these days it is known for the high concentration of casinos and vibrant nightlife for men.\n";
                        cout << "The City of Angeles' ZIP code is 2009, 2024 in Balibago, 2023 under Clark Freeport and Special Economic Zone.\n";
                        cout << "According to the 2020 census, its total population is 462,928.\n";
                        cout << "Here are all the barangays in Angeles: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << AngelesBrgys[i] << "\n";
                        }
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
                        cout << "15. San Luis\n";
                        cout << "16. San Simon\n";
                        cout << "17. Santa Ana\n";
                        cout << "18. Santa Rita\n";
                        cout << "19. Santo Tomas\n";
                        cout << "20. Sasmuan\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Apalit.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Arayat.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Bacolor.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Candaba.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Floridablanca.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Guagua.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Lubao.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Mabalacat.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Macabebe.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Magalang.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Masantol.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Mexico.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Minalin.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Porac.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of San Luis.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of San Simon.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Santa Ana.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Santa Rita.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Santo Tomas.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of Sasmuan.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 20 municipalities in Pampanga.\n";
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

                        cout << "Would you like to find out more about Tarlac City and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(TarlacBrgys)/sizeof(TarlacBrgys[0]);
                        cout << "Mayor: Maria Cristina C. Angeles\n";
                        cout << "Tarlac is a 1st class city and is best known for its fine foods and vast sugar and rice plantations. That it has fine cooking to offer is largely due to the fact that it is the melting pot of Central Luzon.\n";
                        cout << "The City of Tarlac's ZIP code is 2300.\n";
                        cout << "According to the 2020 census, its total population is 385,398.\n";
                        cout << "Here are all the barangays in Tarlac:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TarlacBrgys[i] << "\n";
                        }
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
                        cout << "17. Victoria\n";

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Anao.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Bamban.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Camiling.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Capas.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Concepcion.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Gerona.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of La Paz.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Mayantoc.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Moncada.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Paniqui.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Pura.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Ramos.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of San Clemente.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of San Jose.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of San Manuel.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Santa Ignacia.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Victoria.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 17 municipalities in Tarlac.\n";
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

                        cout << "Would you like to find out more about Olongapo and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(OlongapoBrgys)/sizeof(OlongapoBrgys[0]);
                        cout << "Mayor: Rolen C. Paulino Jr.\n";
                        cout << "The City of Olongapo is a 1st class highly urbanized city situated in Zambales but it is politically independent. Decades of presence of the US naval base in Subic made Olongapo City known as a destination for rest and recreation and, subsequently, contentiously brought in an environment of risky sexual behaviours, thus, the label 'Sin City.'\n";
                        cout << "The City of Olongapo's ZIP code is 2200, and 2222 in Subic Special Economic and Freeport Zone\n";
                        cout << "According to the 2020 census, its total population is 260,317.\n";
                        cout << "Here are all the barangays in Olongapo:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << OlongapoBrgys[i] << "\n";
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Zambales" << endl;
                        cout << "1. Botolan\n";
                        cout << "2. Cabangan\n";
                        cout << "3. Candelaria\n";
                        cout << "4. Castillejos\n";
                        cout << "5. Iba - Capital of Zambales\n";
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Botolan.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Cabangan.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Candelaria.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Castillejos.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Iba.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Masinloc.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Palauig.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of San Antonio.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of San Felipe.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of San Marcelino.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of San Narciso.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Santa Cruz.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Subic.\n";
                        
                        
                        break;
                        }
                        
                        default:{
                        cout << "There are only 13 municipalities in Zambales.\n";
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(BatangasCityBrgys)/sizeof(BatangasCityBrgys[0]);
                        cout << "You have chosen the city of Batangas.\n";
                        cout << "Mayor: Hon. Beverly Rose A. Dimacuha\n";
                        cout << "The City of Batangas is a 1st class component city and the capital of Batangas Province. It is classified as one of the fastest urbanizing cities in the Philippines. It is known as the Industrial Port City of CALABARZON and it is home to the Batangas International Port which is one of the busiest passenger and container terminals in the Philippines.\n";
                        cout << "The City of Batangas' ZIP code is 4200.\n";
                        cout << "According to the 2020 census, its total population is 351,437.\n";
                        cout << "Here are all the barangays in Batangas City: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BatangasCityBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(LipaCityBrgys)/sizeof(LipaCityBrgys[0]);
                        cout << "You have chosen the city of Lipa.\n";
                        cout << "Mayor: Eric B. Africa\n";
                        cout << "The City of Lipa is a 1st class component city and it is the first city charter in the Batangas Province. Lipa is known for coffee production, introduced by the Spaniards. Kapeng barako production once served an important source of income to locals, but it died out in favor of other agricultural products and commercial developments.\n";
                        cout << "The City of Lipa's ZIP code is 4217, 4218.\n";
                        cout << "According to the 2020 census, its total population is 372,931.\n";
                        cout << "Here are all the barangays in Lipa: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << LipaCityBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 3:{
                        int barangayCount = sizeof(SantoTomasBatangasBrgys)/sizeof(SantoTomasBatangasBrgys[0]);
                        cout << "You have chosen the city of Santo Tomas.\n";
                        cout << "Mayor: Arth Jhun A. Marasigan\n";
                        cout << "The City of Santo Tomas is a 1st class component city and is part of the Mega Manila, resulting from the continous expansion of Metro Manila. Santo Tomas is the hometown of Philippine Revolution and Philippine–American War hero Miguel Malvar, the last Filipino General to surrender to the Americans.\n";
                        cout << "The City of Santo Tomas' ZIP code is 4234.\n";
                        cout << "According to the 2020 census, its total population is 218,500.\n";
                        cout << "Here are all the barangays in Santo Tomas: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SantoTomasBatangasBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 4:{
                        int barangayCount = sizeof(TanauanBrgys)/sizeof(TanauanBrgys[0]);
                        cout << "You have chosen the city of Tanauan\n";
                        cout << "Mayor: Nelson P. Collantes\n";
                        cout << "The City of Tanauan is a 1st clsas component city and Tanauan originated as a fortress built by natives and Augustinian Friars; the name 'Tanauan' is derived from tanaw (to look out of a window). It is also historically renowned as the hometown of Apolinario Mabini and other revolutionaries like Jose P. Laurel.\n";
                        cout << "The City of Tanauan's ZIP code is 4232.\n";
                        cout << "According to the 2020 census, its total population is 193,936.\n";
                        cout << "Here are all the barangays in Tanauan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TanauanBrgys[i] << "\n";
                        }
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(BatangasProvMuni)/sizeof(BatangasProvMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Batangas: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << BatangasProvMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        
                        case 1:{
                        cout << "You have chosen the municipality of Agoncillo.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Alitagtag.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Balayan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Balete.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Bauan.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Calaca.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Calatagan.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Cuenca.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Ibaan.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Laurel.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Lemery.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Lian.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Lobo.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Mabini.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Malvar.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Mataasnakahoy.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Nasugbu.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Padre Garcia.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Rosario.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of San Jose.\n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of San Juan.\n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of San Luis.\n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of San Nicolas.\n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of San Pascual.\n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of Santa Teresita.\n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of Taal.\n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of Talisay.\n";
                        
                        
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of Taysan.\n";
                        
                        
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of Tingloy.\n";
                        
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of Tuy.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 30 municipalities in Batangas.\n";
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(BacoorBrgys)/sizeof(BacoorBrgys[0]);
                        cout << "You have chosen the city of Bacoor.\n";
                        cout << "Mayor: Strike Revilla\n";
                        cout << "The City of Bacoor is a 1st class component city and Bacoor is known because it is the first capital of the Revolutionary Government under Emilio Aguinaldo. Bacoor is one of the Philippines' cities known for its excellent seafood supply. Its popular product is mussel—locally known as tahong. Mussel is a superb source of iron, protein, and other vitamins and minerals.\n";
                        cout << "The City of Bacoor's ZIP code is 4102.\n";
                        cout << "According to the 2020 census, its total population is 664,625.\n";
                        cout << "Here are all the barangays in Bacoor: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BacoorBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(CaviteCityBrgys)/sizeof(CaviteCityBrgys[0]);
                        cout << "You have chosen the city of Cavite.\n";
                        cout << "Mayor: Denver Christopher R. Chua\n";
                        cout << "The City of Cavite is a 2nd class component city and it abounds with great objects, and subjects of culture and history. It is the birthplace of a good number of Filipino heroes and it has an interesting range of sites associated with the Philippine Revolution of 1896.\n";
                        cout << "The City of Cavite's ZIP code is 4100, 4101, 4125.\n";
                        cout << "According to the 2020 census, its total population is 100,674.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CaviteCityBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 3:{
                        int barangayCount = sizeof(DasmaBrgys)/sizeof(DasmaBrgys[0]);
                        cout << "You have chosen the city of Dasmariñas.\n";
                        cout << "Mayor: Jennifer A. Barzaga\n";
                        cout << "The City of Dasmariñas is a 1st class component city and it is known as the Industrial Giant of CALABARZON. It is one of Cavite's most rapidly growing local government units. The city has a wide variety of commercial establishments, including retail malls, fast food chains, groceries, convenience stores, restaurants, etc.\n";
                        cout << "The City of Dasmariñas' ZIP code is 4114, 4115, 4126.\n";
                        cout << "According to the 2020 census, its total population is 703,141.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << DasmaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 4:{
                        int barangayCount = sizeof(GenTriasBrgys)/sizeof(GenTriasBrgys[0]);
                        cout << "You have chosen the city of General Trias.\n";
                        cout << "Mayor: Luis Ferrer IV\n";
                        cout << "The City of General Trias, formerly known as San Francisco de Malabon, is a 1st class component city and is famous for its heroic past and contributions to the Philippine revolution, making it a place where history meets contemporary growth. Carabao Milk is a typical souvenir in General Trias.\n";
                        cout << "The City of General Trias' ZIP code is 4107.\n";
                        cout << "According to the 2020 census, its total population is 450,583.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << GenTriasBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 5:{
                        int barangayCount = sizeof(ImusBrgys)/sizeof(ImusBrgys[0]);
                        cout << "You have chosen the city of Imus.\n";
                        cout << "Mayor: Alex L. Advincula\n";
                        cout << "The City of Imus is a 1st class component city and the capital of Cavite Province. It is also known as the Flag Capital of the Philippines because the first Philippine Flag was flown here on May 28, 1898 in the Battle of Alapan.\n";
                        cout << "The City of Imus' ZIP code is 4103.\n";
                        cout << "According to the 2020 census, its total population is 496,794.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << ImusBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 6:{
                        int barangayCount = sizeof(TagaytayBrgys)/sizeof(TagaytayBrgys[0]);
                        cout << "You have chosen the city of Tagaytay.\n";
                        cout << "Mayor: Abraham 'Bambol' Tolentino\n";
                        cout << "The City of Tagaytay is a 2nd class city and It is one of the most frequented places in the south because of its outstanding scenery like the Taal Lake and Taal Volcano and a cold climate. It is also home to the Sky Ranch which is a famous amusement park.\n";
                        cout << "The City of Tagaytay's ZIP code is 4120.\n";
                        cout << "According to the 2020 census, its total population is 85,330.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TagaytayBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 7:{
                        int barangayCount = sizeof(TreceMartBrgys)/sizeof(TreceMartBrgys[0]);
                        cout << "You have chosen the city of Trece Martires.\n";
                        cout << "Mayor: Gemma B. Lubigan\n";
                        cout << "The City of Trece Martires is a 1st class component city and de facto capital of Cavite. It is named for the 13 Filipino patriots martyred by the Spanish in 1896 at Cavite. Trece Martires is a trading centre; rice, fruits, coffee, sugarcane, and bananas are grown in the region.\n";
                        cout << "The City of Trece Martires' ZIP code is 4109.\n";
                        cout << "According to the 2020 census, its total population is 210,503.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TreceMartBrgys[i] << "\n";
                        }
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Alfonso.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Amadeo.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Carmona.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of General Emilio Aguinaldo.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of General Mariano Alvarez.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Indang.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Kawit.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Magallanes.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Maragondon.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Mendez.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Naic.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Noveleta.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Rosario.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Silang.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Tanza.\n";
                        
                        
                        break;
                        }
                        
                        case 16:{
                        cout << "You have chosen the municipality of Ternate.\n";
                        
                        
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(BiñanCityBrgys)/sizeof(BiñanCityBrgys[0]);
                        cout << "You have chosen the city of Biñan.\n";
                        cout << "Mayor: Walfredo R. Dimaguila\n";
                        cout << "The City of Biñan is a 1st class component city and is mostly recognized as a major economic center of Laguna for its industrial parks, as well as a suburb of Metro Manila. The city is also known for a type of pancake made from rice flour, topped with cheese or butter (Puto Biñan).\n";
                        cout << "The City of Biñan's ZIP code is 4024, 4034 in Laguna Technopark.\n";
                        cout << "According to the 2020 census, its total population is 407,437.\n";
                        cout << "Here are all the barangays in Biñan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BiñanCityBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(CabuyaoBrgys)/sizeof(CabuyaoBrgys[0]);
                        cout << "You have chosen the city of Cabuyao.\n";
                        cout << "Mayor: Dennis C. Hain\n";
                        cout << "The City of Cabuyao is a 1st class component city and is also known as The City of Modern Factories. The city hosts Nestlé, Asian Brewery, and San Miguel Brewery's factories, and two major industrial parks, the Light Industry and Science Park I (LISP I) and Silangan Industrial Park.\n";
                        cout << "The City of Cabuyao's ZIP code is 4025.\n";
                        cout << "According to the 2020 census, its total population is 355,330.\n";
                        cout << "Here are all the barangays in Cabuyao: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CabuyaoBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 3:{
                        int barangayCount = sizeof(CalambaBrgys)/sizeof(CalambaBrgys[0]);
                        cout << "You have chosen the city of Calamba.\n";
                        cout << "Mayor: Roseller H. Rizal\n";
                        cout << "The City of Calamba is a 1st class component city and is the Regional Center of CALABARZON. It is the birthplace of National Hero of the Philippines, Jose Riza. Calamba is also known as the Spring Resort Capital of the Philippines because of its many hot springs resorts.\n";
                        cout << "The City of Calamba's ZIP code is 4027, 4028, 4029.\n";
                        cout << "According to the 2020 census, its total population is 539,671.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CalambaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 4:{
                        int barangayCount = sizeof(SanPabLagunaBrgys)/sizeof(SanPabLagunaBrgys[0]);
                        cout << "You have chosen the city of San Pablo.\n";
                        cout << "Mayor: Vicente B. Amante\n";
                        cout << "The City of San Pablo is a 1st class component city and is one of the Philippines' oldest cities. This city is otherwise known as the 'City of Seven Lakes' because it has seven lakes  Sampaloc, Palakpakin, Yambo, Bunot, Pandin, Mohikap, and Calibato.\n";
                        cout << "The City of San Pablo's ZIP code is 4000.\n";
                        cout << "According to the 2020 census, its total population is 285,348.\n";
                        cout << "Here are all the barangays in San Pablo: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SanPabLagunaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 5:{
                        int barangayCount = sizeof(SanPedLagunaBrgys)/sizeof(SanPedLagunaBrgys[0]);
                        cout << "You have chosen the city of San Pedro.\n";
                        cout << "Mayor: Art Joseph Francis Mercado\n";
                        cout << "The City of San Pedro is a 3rd class component city and it is named after the patron saint, Saint Peter. It is also home to the Laguna Lake which is the largest lake in the Philippines.\n";
                        cout << "The City of San Pedro's ZIP code is 4023.\n";
                        cout << "According to the 2020 census, its total population is 326,001.\n";
                        cout << "Here are all the barangays in San Pedro: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SanPedLagunaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 6:{
                        int barangayCount = sizeof(SantaRosaLagunaBrgys)/sizeof(SantaRosaLagunaBrgys[0]);
                        cout << "You have chosen the city of Santa Rosa.\n";
                        cout << "Mayor: Arlene B. Arcillas\n";
                        cout << "The City of Santa Rosa is a 1st class component city and is known for its industrial development. It is home to the Coca-Cola, RC Cola, and Toyota manufacturing plants.\n";
                        cout << "The City of Santa Rosa's ZIP code is 4026.\n";
                        cout << "According to the 2020 census, its total population is 418,812.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SantaRosaLagunaBrgys[i] << "\n";
                        }
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(LagunaMuni)/sizeof(LagunaMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Laguna: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << LagunaMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Alaminos.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Bay.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Calauan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Cavinti.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Famy.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Kalayaan.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Liliw.\n";
                        
                        
                        break;
                        }
                        
                        case 8:{
                        cout << "You have chosen the municipality of Los Baños.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Luisiana.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Lumban.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Mabitac.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Magdalena.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Majayjay.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Nagcarlan.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Paete.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Pagsanjan.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Pakil.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Pangil.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Pila.\n";
                        
                        
                        break;
                        }
                        
                        case 20:{
                        cout << "You have chosen the municipality of Rizal.\n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of Santa Cruz.\n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of Santa Maria.\n";
                        
                        
                        break;
                        }
                        
                        case 23:{
                        cout << "You have chosen the municipality of Siniloan.\n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of Victoria.\n";
                        
                        
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(LucenaCityBrgys)/sizeof(LucenaCityBrgys[0]);
                        cout << "You have chosen the city of Lucena.\n";
                        cout << "Mayor: Mark Don Victor B. Alcala\n";
                        cout << "The City of Lucena is a 1st class highly urbanized city situated in Quezon but is politically independent. It is a major fishing port and a regional wholesale distributing point and has food-processing plants (particularly for coconut). Lucena is served by major road and rail facilities. Banahaw and San Cristobal Mountains National Park is located here.\n";
                        cout << "The City of Lucena's ZIP code is 4300, 4301.\n";
                        cout << "According to the 2020 census, its total population is 278,924.\n";
                        cout << "Here are all the barangays in Lucena: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BiñanCityBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(TayabasBrgys)/sizeof(TayabasBrgys[0]);
                        cout << "You have chosen the city of Tayabas.\n";
                        cout << "Mayor: Maria Lourdes R. Pontioso\n";
                        cout << "The City of Tayabas is a 6th class component city and is home to the Minor Basilica of St. Michael The Archangel, 20 Spanish stone bridges, a number of heritage houses and other historical landmarks, Tayabas acts as an undisturbed time capsule of its noble past.\n";
                        cout << "The City of Tayabas' ZIP code is 4327.\n";
                        cout << "According to the 2020 census, its total population is 112,658\n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in Tayabas: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TayabasBrgys[i] << "\n";
                        }
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(QuezonProvMuni)/sizeof(QuezonProvMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Quezon: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << QuezonProvMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Agdangan.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Alabat.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Atimonan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Buenavista.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Burdeos.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Candelaria.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Catanauan.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Dolores.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of General Luna.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of General Nakar.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Gumaca.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Infanta.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Jomalig.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Lopez.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Lucban.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Macalelon.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Mauban.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Mulanay.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Padre Burgos.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of Pagbilao.\n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of Panukulan.\n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of Patnanungan.\n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of Perez.\n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of Pitogo.\n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of Plaridel.\n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of Polillo.\n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of Quezon.\n";
                        
                        
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of Real.\n";
                        
                        
                        break;
                        }
                        
                        case 29:{
                        cout << "You have chosen the municipality of Sampaloc.\n";
                        
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of San Andres.\n";
                        
                        
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of San Antonio.\n";
                        
                        
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of San Francisco.\n";
                        
                        
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of San Narciso.\n";
                        
                        
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of Sariaya.\n";
                        
                        
                        break;
                        }
                        
                        case 35:{
                        cout << "You have chosen the municipality of Tagkawayan.\n";
                        
                        
                        break;
                        }
                        
                        case 36:{
                        cout << "You have chosen the municipality of Tiaong.\n";
                        
                        
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of Unisan.\n";
                        
                        
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

                        cout << "Would you like to find out more about Antipolo and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(AntipoloRizalBrgys)/sizeof(AntipoloRizalBrgys[0]);
                        cout << "Mayor: Casimiro Ynares III\n";
                        cout << "The City of Antipolo is a 1st class component city and the capital of Rizal province. It is known as the Pilgrimage Capital of the Philippines as it is home to many religious landmarks like the National Shrine of Our Lady of Peace and Good Voyage, also known as the Antipolo Cathedral. The Marian image of the Virgin of Antipolo, Boso-Boso Church, St. Therese Shrine. It also houses the Pinto Art Museum which features Filipino art, gardens, architecture.\n";
                        cout << "The City of Antipolo's ZIP code is 1870, 1871(Mayamot), 1872(Bagong Nayon/Cogeo), 1873(Cupang), 1874(Langhaya),1875(Mambagat)\n";
                        cout << "According to the 2020 census, its total population is 887,399.\n";
                        cout << "Here are all the barangays in :\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << AntipoloRizalBrgys[i] << "\n";
                        }
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Angono.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Baras.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Binangonan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Cainta.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Cardona.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Jalajala.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Morong.\n";
                        
                        
                        break;
                        }
                        
                        case 8:{
                        cout << "You have chosen the municipality of Pililla.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Rodriguez.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of San Mateo.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Tanay.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Taytay.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Teresa.\n";
                        
                        
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Boac.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Buenavista.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Gasan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Mogpog.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Santa Cruz.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Torrijos.\n";
                        
                        
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Abra de Ilog.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Calintaan.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Looc.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Lubang.\n";
                        
                        
                        break;
                        }
                        
                        case 5:{
                        cout << "You have chosen the municipality of Magsaysay.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Mamburao.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Paluan.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Rizal.\n";
                        
                        
                        break;
                        }
                        
                        case 9:{
                        cout << "You have chosen the municipality of Sablayan.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of San Jose.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Santa Cruz.\n";
                        
                        
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        cout << "Mayor: Marilou F. Morillo\n";
                        cout << "The City of Calapan is a 3rd class component city and the capital of Oriental Mindoro and the Regional Center of MIMAROPA. It is also known as the City of Golden Grains and The Acropolis of the South. It combines the convenience of an urbanized landscape and the attraction of its ecotourism sites and natural sanctuaries.\n";
                        cout << "The City of Calapan's ZIP code is 5200.\n";
                        cout << "According to the 2020 census, its total population is 145,786.\n";
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Baco.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Bansud.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Bongabong.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Bulalacao.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Gloria.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Mansalay.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Naujan.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Pinamalayan.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Pola.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Puerto Galera.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Roxas.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of San Teodoro.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Soccoro.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Victoria.\n";
                        
                        
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(PuertoPrincesaBrgys)/sizeof(PuertoPrincesaBrgys[0]);
                        cout << "Mayor: Lucilo R. Bayron\n";
                        cout << "The City of Puerto Princesa is a 1st class highly urbanized city stationalized and is also the capital of Palawan. Puerto-Princesa Subterranean River National Park encompasses one of the world's most impressive cave systems, featuring spectacular limestone karst landscapes, pristine natural beauty, and intact old-growth forests and distinctive wildlife.\n";
                        cout << "The City of Puerto Princesa's ZIP code is 5300, 5301(Iwahig Penal Colony)\n";
                        cout << "According to the 2020 census, its total population is 307,079.\n";
                        cout << "Here are all the barangays in Puerto Princesa:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << PuertoPrincesaBrgys[i] << "\n";
                        }
                        }
                        }
                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(PalawanMuni)/sizeof(PalawanMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Palawan:" << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << PalawanMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                    
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Aborlan.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Agutaya.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Araceli.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Balabac.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Bataraza.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Brooke's Point.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Basuanga.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Cagayancillo.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Coron.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Culion.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Cuyo.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Dumaran.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of El Nido.\n";
                        
                        
                        break;
                        }
                        
                        case 14:{
                        cout << "You have chosen the municipality of Kalayaan.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Linapacan.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Magsaysay.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Narra.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Quezon.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Rizal.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of Roxas.\n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of San Vicente.\n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of Sofronio Española.\n";
                        
                        
                        break;
                        }
                        
                        case 23:{
                        cout << "You have chosen the municipality of Taytay.\n";
                        
                        
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
                        int muniCount = sizeof(RomblonProvMuni)/sizeof(RomblonProvMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Romblon:" << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << RomblonProvMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){

                        case 1:{
                        cout << "You have chosen the municipality of Alcantara.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Banton.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Cajidiocan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Calatrava.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Concepcion.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Corcuera.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Ferrol.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Looc.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Magdiwang.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Odiongan.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Romblon.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of San Agustin.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of San Andres.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of San Fernando.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of San Jose.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Santa Fe.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Santa Maria.\n";
                        
                        
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
                        cout << "1. Legazpi - Capital of Albay and Regional Center of the Bicol Region.\n";
                        cout << "2. Ligao\n";
                        cout << "3. Tabaco\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;
                        
                        switch(barangays){
                        case 1:{
                        int barangayCount = sizeof(LegazpiBrgys)/sizeof(LegazpiBrgys[0]);
                        cout << "You have chosen the city of Legazpi.\n";
                        cout << "Mayor: Hon. Atty. Alfredo A. Garbin Jr.\n";
                        cout << "The City of Legazpi is a 1st class component city and the capital of Albay and the Regional Center of Bicol Region. It houses the Mayon Volcano, which is referred to as one of the most perfectly shaped volcanoes in the world. It also houses the Cagsawa Ruins Park which is the remnants of the Cagsawa Church after it was destroyed by Mayon Volcano.\n";
                        cout << "The City of Legazpi's ZIP code is 4500.\n";
                        cout << "According to the 2020 census, its total population is 209,533.\n";
                        cout << "Here are all the barangays in Legazpi:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << LegazpiBrgys[i] << "\n";
                        }
                        break;
                        }
                        case 2:{
                        int barangayCount = sizeof(LigaoBrgys)/sizeof(LigaoBrgys[0]);
                        cout << "You have chosen the city of Ligao.\n";
                        cout << "Mayor: Fernando Vallejo Gonzalez\n";
                        cout << "The City of Ligao is a 4th class component city and its economy mainly comes from their agriculture sector. According to the Government of Ligao, the place was famous for its beautiful maidens, prompting eligible young men near and far to come courting. One such group of men crossed paths with Spaniards soldiers who asked what the place was called. The young men thought the foreigners were asking what they are about and answered 'Manliligaw'.\n";
                        cout << "The City of Ligao's ZIP code is 4504.\n";
                        cout << "According to the 2020 census, its total population is 118,096.\n";
                        cout << "Here are all the barangays in Ligao:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << LigaoBrgys[i] << "\n";
                        }
                        break;
                        }
                        case 3:{
                        int barangayCount = sizeof(TabacoBrgys)/sizeof(TabacoBrgys[0]);
                        cout << "You have chosen the city of Tabaco.\n";
                        cout << "Mayor: Cielo Krisel Lagman-Luistro\n";
                        cout << "The City of Tabaco is a 4th class component city. It houses the Tabaco International Port which is one of the first international ports of entry in the Philippines. It is also famous for its Mt. Mayon Skyline Adventure that allows people to enjoy the beauty of Mayon Volcano. \n";
                        cout << "The City of Tabaco's ZIP code is 4511.\n";
                        cout << "According to the 2020 census, its total population is 140,961.\n";
                        cout << "Here are all the barangays in Tabaco.\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TabacoBrgys[i] << "\n";
                        }
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
                        cout << "Here are all the municipalities in Albay: " << endl;
                        cout << "1. Bacacay\n";
                        cout << "2. Camalig\n";
                        cout << "3. Daraga\n";
                        cout << "4. Guinobatan\n";
                        cout << "5. Jovellar\n";
                        cout << "6. Libon\n";
                        cout << "7. Malilipot\n";
                        cout << "8. Malinao\n";
                        cout << "9. Manito\n";
                        cout << "10. Oas\n";
                        cout << "11. Pio Duran\n";
                        cout << "12. Polangui\n";
                        cout << "13. Rapu-Rapu\n";
                        cout << "14. Santo Domingo\n";
                        cout << "15. Tiwi\n";


                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Bacacay.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Camalig.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Daraga.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Guinobatan.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Jovellar.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Libon.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Malilipot.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Malinao.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Manito.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Oas.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Pio Duran.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Polangui.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Rapu-Rapu.\n";
                        
                        
                        break;
                        }
                        
                        case 14:{
                        cout << "You have chosen the municipality of Santo Domingo.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Tiwi.\n";
                        
                        
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
                        cout << "3. Daet - Capital of Camarines Norte\n";
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Basud.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Capalonga.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Daet.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Jose Panganiban.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Labo.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Mercedes.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Paracale.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of San Lorenzo Ruiz.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of San Vicente.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Santa Elena.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Talisay.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Vinzons.\n";
                        
                        
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

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(IrigaBrgys)/sizeof(IrigaBrgys[0]);
                        cout << "You have chosen the city of Iriga.\n";
                        cout << "Mayor: Wilfredo Rex C. Oliva\n";
                        cout << "The City of Iriga is a 4th class component city. It is known as the City of Crystal-clear Springs and has well over 30 natural springs. It also houses the Mount Iriga or Mount Asog that is a centerpiece for Iriga's beauty. \n";
                        cout << "The City of Iriga's ZIP code is 4431.\n";
                        cout << "According to the 2020 census, its total population is 114,457.\n";
                        cout << "Here are all the barangays in Iriga: ";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << IrigaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(NagaBrgys)/sizeof(NagaBrgys[0]);
                        cout << "You have chosen the city of Naga.\n";
                        cout << "Mayor: Nelson S. Legacion\n";
                        cout << "The Pilgrim City of Naga is a 1st class independent component city. It is also known as the Queen City of Bicol because of it was the site that established the Filipino revolutionary government in 1898. It's a Pilgrim City because it's home to one of the largest Marian pilgrimages in Asia.\n";
                        cout << "The City of Naga's ZIP code is 4400.\n";
                        cout << "According to the 2020 census, its total population is 209,170.\n";
                        cout << "Here are all the barangays in : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << NagaBrgys[i] << "\n";
                        }
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(CamarinesSurMuni)/sizeof(CamarinesSurMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Camarines Sur: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << CamarinesSurMuni[i] << "\n";
                        }
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Baao.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Balatan.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Bato.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Bombon.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Buhi.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Bula.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Cabusao.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Calabanga.\n";
                        
                        
                        break;
                        }
                        
                        case 9:{
                        cout << "You have chosen the municipality of Camaligan.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Canaman.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Caramoan.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Del Gallego.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Gainza.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Garchitorena.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Goa.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Lagonoy.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Libmanan.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Lupi.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Magarao.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of Milaor.\n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of Minalabac.\n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of Nabua.\n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of Ocampo.\n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of Pamplona.\n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of Pasacao.\n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of Pili.\n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of Presentacion.\n";
                        
                        
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of Ragay.\n";
                        
                        
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of Sagñay.\n";
                        
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of San Fernando.\n";
                        
                        
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of San Jose.\n";
                        
                        
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of Sipocot.\n";
                        
                        
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of Siruma.\n";
                        
                        
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of Tigaon.\n";
                        
                        
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of Tinambac.\n";
                        
                        
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
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Bagamonoc.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Baras.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Bato.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Caramoran.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Gigmoto.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Pandan.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Panganiban.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of San Andres.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of San Miguel.\n";
                        
                        
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the municipality of Viga.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Virac.\n";
                        
                        
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

                        cout << "Would you like to find out more about Masbate City and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(MasbateCityBrgys)/sizeof(MasbateCityBrgys[0]);
                        cout << "Mayor: Socrates M. Tuason\n";
                        cout << "The City of Masbate is a 3rd class component city and the capital of Masbate Province. It serves as the main commercial center and chief seaport of the province. Its known for its natural beauty including beaches, lighthouses, and a mangrove park.\n";
                        cout << "The City of Masbate's ZIP code is 5400.\n";
                        cout << "According to the 2020 census, its total population is 104,522.\n";
                        cout << "Here are all the barangays in :\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << MasbateCityBrgys[i] << "\n";
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(MasbateProvMuni)/sizeof(MasbateProvMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Masbate Province.\n";
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << MasbateProvMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                            
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                    
                            cout << "Enter a number corresponding to a municipality to get information about it: ";
                            cin >> barangays;
                                                    
                            switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Aroroy.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Baleno.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Balud.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Batuan.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Cataingan.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Cawayan.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Claveria.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Dimasalang.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Esperanza.\n";
                        
                        
                        break;
                        }
                        
                        case 10:{
                        cout << "You have chosen the municipality of Mandaon.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Milagros.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Mobo.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Monreal.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Palanas.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Pio V. Corpuz.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Placer.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of San Fernando.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of San Jacinto.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of San Pascual.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of Uson.\n";
                        
                        
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

                        cout << "Would you like to find out more about Sorsogon City and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(SorsogonCityBrgys)/sizeof(SorsogonCityBrgys[0]);
                        cout << "Mayor: Maria Ester E. Hamor\n";
                        cout << "The City of Sorsogon is a 2nd class component city and the capital of Sorsogon Province. It is known as the Whale Shark Capital of the Philippines. It is considered as one of the leading cities in urbanization.\n";
                        cout << "The City of Sorsogon's ZIP code is 4700(East&West districts), 4701(Bacon district)\n";
                        cout << "According to the 2020 census, its total population is 182,237.\n";
                        cout << "Here are all the barangays in :\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SorsogonCityBrgys[i] << "\n";
                        }
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Barcelona.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Bulan.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Bulusan.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Casiguran.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Castilla.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Donsol.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Gubat.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Irosin.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Juban.\n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of Magallanes.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Matnog.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Pilar.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Prieto Diaz.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Santa Magdalena.\n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Atlavas.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Balete.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Banga.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Batan.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Buruanga.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Ibajay.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Kalibo.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Lezo.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Libacao.\n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of Madalag.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Malay.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Malinao.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Nabas.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of New Washington.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Numancia.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Tangalan.\n";
                        
                        
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

                        cout << "Would you like to find out more about Bacolod and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(BacolodBrgys)/sizeof(BacolodBrgys[0]);
                        cout << "Mayor: Alfredo B. Benitez\n";
                        cout << "The City of Bacolod is a 1st class highly urbanized city situated in the Antique province. It is known as the City of Smiles because of the Maskara Festival. Other title of it is the Land of Sweet People because of their inasal chicken and sweet dessert treats.\n";
                        cout << "The City of Bacolod's ZIP code is 6100.\n";
                        cout << "According to the 2020 census, its total population is 600,683.\n";
                        cout << "Here are all the barangays in :\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BacolodBrgys[i] << "\n";
                        }
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
                        cout << "12. San Jose de Buenavista - Capital of Antique\n";
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Anini-y.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Barbaza.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Belison.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Bugasong.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Caluya.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Culasi.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Hamtic.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Laua-an.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Libertad.\n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of Pandan.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Patnongon.\n";


                        }

                        case 12:{
                        cout << "You have chosen the municipality of San Jose de Buenavista.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of San Remigio.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Sebaste.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Sibalom.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Tibiao.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Tobias Fornier.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Valderrama.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 18 municipalities in Antique.\n";
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
                        cout << "Roxas - Capital of Capiz\n";

                        cout << "Would you like to find out more about Roxas and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangayCount = sizeof(RoxasCityBrgys)/sizeof(RoxasCityBrgys[0]);
                        cout << "Mayor: Ronnie T. Dadivas\n";
                        cout << "The City of Roxas is a 3rd class component city and the capital of the Capiz Province. Due to the abundancy of seafood, it is known as the Seafood Capital of the Philippines. \n";
                        cout << "The City of Roxas' ZIP code is 5800.\n";
                        cout << "According to the 2020 census, its population is 179,292.\n";
                        cout << "Here are all the barangays in Roxas:\n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << RoxasCityBrgys[i] << "\n";
                        }
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Cuartero.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Dao.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Dumalag.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Dumarao.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Ivisan.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Jamindan.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Maayon.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Mambusao.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Panay.\n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of Panitan.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Pilar.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Pontevedra.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of President Roxas.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Sapian.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Sigma.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Tapaz.\n";
                        
                        
                        break;
                        }
                        
                        default:{
                        cout << "There are only 16 municipalities in Capiz.\n";
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Buenavista.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Jordan.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Nueva Valencia.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of San Lorenzo.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Sibunag.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 5 municipalities in Guimaras.\n";
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
                        cout << "2. Iloilo City - Highly Urbanized City and the Capital of Iloilo and the Regional Center of Western Visayas.\n";

                        cout << "Would you like to find out more about the cities and the barangays within them? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){
                        int barangays;

                        cout << "Enter a number corresponding to a city to get information about it and its barangays; ";
                        cin >> barangays;

                        switch (barangays){
                        case 1:{
                        int barangayCount = sizeof(PassiBrgys)/sizeof(PassiBrgys[0]);
                        cout << "You have chosen the city of Passi\n";
                        cout << "Mayor: Stephen A. Palmares\n";
                        cout << "The City of Passi is a 4th class component city and is known as the Sweet City in the Heart of Panay due to its large pineapple plantations and fruit production. \n";
                        cout << "The City of Passi's ZIP code is 5037.\n";
                        cout << "According to the 2020 census, its total population is 88,873.\n";
                        cout << "Here are all the barangays in Passi: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << PassiBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(IloiloCityBrgys)/sizeof(IloiloCityBrgys[0]);
                        cout << "You have chosen the city of Iloilo\n";
                        cout << "Mayor: Jerry Treñas\n";
                        cout << "The City of Iloilo is a 1st class highly urbanized city and the capital of Iloilo. It is also the regional center of Western Visayas. It is well known for well-preserved historic sites and old churches like the Jaro Cathedral, Camiña Balay nga Bato, and the Dinagyang Festival. Iloilo is also considered as the Philippine's City of love.\n";
                        cout << "The City of Iloilo's ZIP code is 5000.\n";
                        cout << "According to the 2020 census, its total population is 457,626.\n";
                        cout << "Here are all the barangays in Iloilo: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << IloiloCityBrgys[i] << "\n";
                        }
                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(IloiloProvMuni)/sizeof(IloiloProvMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Iloilo: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << IloiloProvMuni[i] << "\n";
                        }
                        
                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Ajuy.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Alimodian.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Anilao.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Badiangan.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Balasan.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Banate.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Barotac Nuevo.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Barotac Viejo.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Batad.\n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of Bingawan.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Cabatuan.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Calinog.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Carles.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Concepcion.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Dingle.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Dueñas.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of Dumangas.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Estancia.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Guimbal.\n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of Igbaras.\n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of Janiuay.\n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of Lambunao.\n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of Leganes.\n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of Lemery.\n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of Leon.\n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of Maasin.\n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of Miagao.\n";
                        
                        
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of Mina.\n";
                        
                        
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of New Lucena.\n";
                        
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of Oton.\n";
                        
                        
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of Pavia.\n";
                        
                        
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of Pototan.\n";
                        
                        
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of San Dionisio.\n";
                        
                        
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of San Enrique.\n";
                        
                        
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of San Joaquin.\n";
                        
                        
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of San Miguel.\n";
                        
                        
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of San Rafael.\n";
                        
                        
                        break;
                        }

                        case 38:{
                        cout << "You have chosen the municipality of Santa Barbara.\n";
                        
                        
                        break;
                        }

                        case 39:{
                        cout << "You have chosen the municipality of Sara.\n";
                        
                        
                        break;
                        }

                        case 40:{
                        cout << "You have chosen the municipality of Tigbauan.\n";
                        
                        
                        break;
                        }

                        case 41:{
                        cout << "You have chosen the municipality of Tubungan.\n";
                        
                        
                        break;
                        }

                        case 42:{
                        cout << "You have chosen the municipality of Zarraga.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 42 municipalities in Iloilo.\n";
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
                        int barangayCount = sizeof(BagoBrgys)/sizeof(BagoBrgys[0]);
                        cout << "You have chosen the city of Bago.\n";
                        cout << "Information about city\n";
                        cout << "The City of Bago is a 2nd class component city. It is known as the Home of Historical and Natural Treasures, owing to its contribution in the colorful history of Negros Occidental. With its abundance in flora and fauna, it provides a beautiful scenery.\n";
                        cout << "The City of Bago's ZIP code is 6101.\n";
                        cout << "According to the 2020 census, its total population is 191,210.\n";
                        cout << "Here are all the barangays in Bago: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << BagoBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        int barangayCount = sizeof(CadizBrgys)/sizeof(CadizBrgys[0]);
                        cout << "You have chosen the city of Cadiz.\n";
                        cout << "Mayor: Salvador G. Escalante Jr.\n";
                        cout << "The City of Cadiz is a 2nd class component city. Cadiz is rich in natural resources and considered as one of the few fishing centers of Negros Occidental. It is envisioned to be the seafood center of Negros.\n";
                        cout << "The City of Cadiz' ZIP code is 6121.\n";
                        cout << "According to the 2020 census, its total population is 158,544.\n";
                        cout << "Here are all the barangays in Cadiz: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CadizBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 3:{
                        int barangayCount = sizeof(EscalanteBrgys)/sizeof(EscalanteBrgys[0]);
                        cout << "You have chosen the city of Escalante.\n";
                        cout << "Mayor: Melecio J. Yap Jr.\n";
                        cout << "The City of Escalante is a 4th class component city. Escalante is known for its coastal environment, local delicary like the Panyam, and very cheerful individuals.\n";
                        cout << "The City of Escalante's ZIP code is 6124.\n";
                        cout << "According to the 2020 census, its total population is 96,159.\n";
                        cout << "Here are all the barangays in Escalante: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << EscalanteBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 4:{
                        int barangayCount = sizeof(HimamaylanBrgys)/sizeof(HimamaylanBrgys[0]);
                        cout << "You have chosen the city of Himamaylan.\n";
                        cout << "Mayor: Rogelio Raymund I. Tongson\n";
                        cout << "The City of Himamaylan is a 3rd class component city. It served as a garrison for Spanish forces back in 1795. It also houses many natural attractions including waterfalls, caves, and springs.\n";
                        cout << "The City of Himamaylan's ZIP code is 6108.\n";
                        cout << "According to the 2020 census, its total population is 116,240.\n";
                        cout << "Here are all the barangays in Himamaylan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << HimamaylanBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 5:{
                        int barangayCount = sizeof(KabankalanBrgys)/sizeof(KabankalanBrgys[0]);
                        cout << "You have chosen the city of Kabankalan.\n";
                        cout << "Mayor: Benjie M. Miranda\n";
                        cout << "The City of Kabankalan is a 1st class component city. It is the largest city in the Negros Occidental Province. It is one of the most competitive, most bankable, cleanest, and most livable city in the island of Negros. Kabankalan is where you would also find the Central Philippines State University.\n";
                        cout << "The City of Kabankalan's ZIP code is 6111\n";
                        cout << "According to the 2020 census, its total population is 200,198. However, according to the 2024 census, its total is now 323,108.\n";
                        cout << "Here are all the barangays in Kabankalan: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << KabankalanBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 6:{
                        int barangayCount = sizeof(LaCarlotaBrgys)/sizeof(LaCarlotaBrgys[0]);
                        cout << "You have chosen the city of La Carlota.\n";
                        cout << "Mayor: Rex R. Jalandoon\n";
                        cout << "The City of La Carlota is a 4th class component city. It is known as The Drum Beating of Beauty and Dance because of its vibrant festivals. La Carlota is also one of the major sugar-producing cities in the Philippines.\n";
                        cout << "The City of La Carlota's ZIP code is 6130.\n";
                        cout << "According to the 2020 census, its total population is 66,664.\n";
                        cout << "Here are all the barangays in La Carlota: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << LaCarlotaBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 7:{
                        int barangayCount = sizeof(SagayBrgys)/sizeof(SagayBrgys[0]);
                        cout << "You have chosen the city of Sagay.\n";
                        cout << "Mayor: Narciso L. Javelola Jr.\n";
                        cout << "The City of Sagay is a 2nd class component city. It is famous for its lucrative fishing industry and their marine ecosystem. The City Garden and the Living Tree Museum is also situated in Sagay.\n";
                        cout << "The City of Sagay's ZIP code is 6122, 6123(Paraiso/Fabrica)\n";
                        cout << "According to the 2020 census, its total population is 148,894.\n";
                        cout << "Here are all the barangays in Sagay: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SagayBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 8:{
                        int barangayCount = sizeof(SanCarlosNegrosBrgys)/sizeof(SanCarlosNegrosBrgys[0]);
                        cout << "You have chosen the city of San Carlos.\n";
                        cout << "Mayor: Renato Y. Gustilo\n";
                        cout << "The City of San Carlos is a 2nd class component city. Known for its large amount of sugarcane production. \n";
                        cout << "The City of San Carlos' ZIP code is 6127.\n";
                        cout << "According to the 2020 census, its total population is 132,650.\n";
                        cout << "Here are all the barangays in San Carlos: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SanCarlosNegrosBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 9:{
                        int barangayCount = sizeof(SilayBrgys)/sizeof(SilayBrgys[0]);
                        cout << "You have chosen the city of Silay.\n";
                        cout << "Mayor: Joedith C. Gallego\n";
                        cout << "The City of Silay is a 3rd class component city. It is known as the Paris of Negros and the Cultrual and Intellectual Hub of Negros because the residents love for knowledge and works of art.\n";
                        cout << "The City of Silay's ZIP code is 6116, 6117\n";
                        cout << "According to the 2020 census, its total population is 130,478.\n";
                        cout << "Here are all the barangays in Silay: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SilayBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 10:{
                        int barangayCount = sizeof(SipalayBrgys)/sizeof(SipalayBrgys[0]);
                        cout << "You have chosen the city of Sipalay.\n";
                        cout << "Mayor: Maria Gina M. Lizares\n";
                        cout << "The City of Sipalay is a 4th class component city. It is the top tourist destination in Negros Occidental. It is famous for its natural , untouched, beautiful, and pristine beaches. It is dubbed as the uncommercialized New Boracay of Negros.\n";
                        cout << "The City of Sipalay's ZIP code is 6113.\n";
                        cout << "According to the 2020 census, its total population is 72,448.\n";
                        cout << "Here are all the barangays in Sipalay: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << SipalayBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 11:{
                        int barangayCount = sizeof(TalisayBrgys)/sizeof(TalisayBrgys[0]);
                        cout << "You have chosen the city of Talisay.\n";
                        cout << "Mayor: Nilo Jesus Antonio E. Lizares III\n";
                        cout << "The City of Talisay is a 4th class component city. Talisay is known as a monocrop farm for sugarcane. Haciendas were created for large hectares of sugarcanes.\n";
                        cout << "The City of Talisay's ZIP code is 6115.\n";
                        cout << "According to the 2020 census, its total population is 108,909.\n";
                        cout << "Here are all the barangays in Talisay: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << TalisayBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 12:{
                        int barangayCount = sizeof(VictoriasBrgys)/sizeof(VictoriasBrgys[0]);
                        cout << "You have chosen the city of Victorias\n";
                        cout << "Mayor: Javier Miguel L. Benitez\n";
                        cout << "The City of Victorias is a 4th class component city. It is home to the largest sugarmill and refinery in South East Asia. It is also the center of Agri-Eco Tourism in Northern Negros.\n";
                        cout << "The City of Victorias' ZIP code is 6119.\n";
                        cout << "According to the 2020 census, its total population is 90,101.\n";
                        cout << "Here are all the barangays in Victorias: \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << VictoriasBrgys[i] << "\n";
                        }
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Binalbagan.\n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of Calatrava.\n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of Candoni.\n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of Cauayan.\n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of Enrique B. Magalona.\n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of Hinigaran.\n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of Hinoba-an.\n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of Ilog.\n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of Isabela.\n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of La Castellana.\n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of Manapla.\n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of Moises Padilla.\n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of Murcia.\n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of Pontevedra.\n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of Pulupandan.\n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of Salvador Benedicto.\n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of San Enrique.\n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of Toboso.\n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of Valladolid.\n";
                        
                        
                        break;
                        }

                        default:{
                        cout << "There are only 19 municipalities in Negros Occidental.\n";
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

                        cout << "Would you like to find out more about Tagbilaran and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        int muniCount = sizeof(BoholMuni)/sizeof(BoholMuni[0]);
                        char municipal;
                        cout << "Here are all the municipalities in Bohol: " << endl;
                        for (int i = 0; i < muniCount; ++i) {
                            cout << i + 1 << ". " << BoholMuni[i] << "\n";
                        }

                        cout << "Would you like to find out more about the municipalities? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of Alburquerque\n";
                        break;
                        }

                        case 2:{
                            cout << "You have chosen the municipality of Alicia\n";
                            break;
                        }

                        case 3:{
                            cout << "You have chosen the municipality of Anda\n";
                            break;
                        }

                        case 4:{
                            cout << "You have chosen the municipality of Antequera\n";
                            break;
                        }

                        case 5:{
                            cout << "You have chosen the municipality of Baclayon\n";
                            break;
                        }

                        case 6:{
                            cout << "You have chosen the municipality of Balilihan\n";
                            break;
                        }

                        case 7:{
                            cout << "You have chosen the municipality of Batuan\n";
                            break;
                        }

                        case 8:{
                            cout << "You have chosen the municipality of Bien Unido\n";
                            break;
                        }

                        case 9:{
                            cout << "You have chosen the municipality of Bilar\n";
                            break;
                        }

                        case 10:{
                            cout << "You have chosen the municipality of Buenavista\n";
                            break;
                        }

                        case 11:{
                            cout << "You have chosen the municipality of Calape\n";
                            break;
                        }

                        case 12:{
                            cout << "You have chosen the municipality of Candijay\n";
                            break;
                        }

                        case 13:{
                            cout << "You have chosen the municipality of Carmen\n";
                            break;
                        }

                        case 14:{
                            cout << "You have chosen the municipality of Catigbian\n";
                            break;
                        }

                        case 15:{
                            cout << "You have chosen the municipality of Clarin\n";
                            break;
                        }

                        case 16:{
                            cout << "You have chosen the municipality of Corella\n";
                            break;
                        }

                        case 17:{
                            cout << "You have chosen the municipality of Cortes\n";
                            break;
                        }

                        case 18:{
                            cout << "You have chosen the municipality of Dagohoy\n";
                            break;
                        }

                        case 19:{
                            cout << "You have chosen the municipality of Danao\n";
                            break;
                        }

                        case 20:{
                            cout << "You have chosen the municipality of Dauis\n";
                            break;
                        }

                        case 21:{
                            cout << "You have chosen the municipality of Dimiao\n";
                            break;
                        }

                        case 22:{
                            cout << "You have chosen the municipality of Duero\n";
                            break;
                        }

                        case 23:{
                            cout << "You have chosen the municipality of Garcia Hernandez\n";
                            break;
                        }

                        case 24:{
                            cout << "You have chosen the municipality of Getafe\n";
                            break;
                        }

                        case 25:{
                            cout << "You have chosen the municipality of Guindulman\n";
                            break;
                        }

                        case 26:{
                            cout << "You have chosen the municipality of Inabanga\n";
                            break;
                        }

                        case 27:{
                            cout << "You have chosen the municipality of Jagna\n";
                            break;
                        }

                        case 28:{
                            cout << "You have chosen the municipality of Lila\n";
                            break;
                        }

                        case 29:{
                            cout << "You have chosen the municipality of Loay\n";
                            break;
                        }

                        case 30:{
                            cout << "You have chosen the municipality of Loboc\n";
                            break;
                        }

                        case 31:{
                            cout << "You have chosen the municipality of Loon\n";
                            break;
                        }

                        case 32:{
                            cout << "You have chosen the municipality of Mabini\n";
                            break;
                        }

                        case 33:{
                            cout << "You have chosen the municipality of Maribojoc\n";
                            break;
                        }

                        case 34:{
                            cout << "You have chosen the municipality of Panglao\n";
                            break;
                        }

                        case 35:{
                            cout << "You have chosen the municipality of Pilar\n";
                            break;
                        }

                        case 36:{
                            cout << "You have chosen the municipality of President Carlos P. Garcia\n";
                            break;
                        }

                        case 37:{
                            cout << "You have chosen the municipality of Sagbayan\n";
                            break;
                        }

                        case 38:{
                            cout << "You have chosen the municipality of San Isidro\n";
                            break;
                        }

                        case 39:{
                            cout << "You have chosen the municipality of San Miguel\n";
                            break;
                        }

                        case 40:{
                            cout << "You have chosen the municipality of Sevilla\n";
                            break;
                        }

                        case 41:{
                            cout << "You have chosen the municipality of Sierra Bullones\n";
                            break;
                        }

                        case 42:{
                            cout << "You have chosen the municipality of Sikatuna\n";
                            break;
                        }

                        case 43:{
                            cout << "You have chosen the municipality of Talibon\n";
                            break;
                        }

                        case 44:{
                            cout << "You have chosen the municipality of Trinidad\n";
                            break;
                        }

                        case 45:{
                            cout << "You have chosen the municipality of Tubigon\n";
                            break;
                        }

                        case 46:{
                            cout << "You have chosen the municipality of Ubay\n";
                            break;
                        }

                        case 47:{
                            cout << "You have chosen the municipality of Valencia\n";
                            break;
                        }

                        default:{
                            cout << "There are only 47 municipalities in Valencia.\n";
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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

                    cout << "Biliran has no cities, would you like to find out about the municipalities? (Y/N): ";
                    cin >> cmb;

                        if (cmb == 'Y' || cmb == 'y'){
                        char municipal;
                        cout << "Here are all the municipalities in Biliran: " << endl;
                        cout << "1. Almeria\n";
                        cout << "2. Biliran\n";
                        cout << "3. Cabucgayan\n";
                        cout << "4. Caibiran\n";
                        cout << "5. Culaba\n";
                        cout << "6. Kawayan\n";
                        cout << "7. Maripipi\n";
                        cout << "8. Naval - Capital of Biliran\n";

                        cout << "Would you like to find out more about the municipalities and the barangays within them? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        default:{
                        break;
                        }
                        }
                        }
                        }

                    }

                    else if (easternvis == 2){
                    cout << "You have chosen Eastern Samar. " << endl;

                    cout << "Would you like to find out about the cities or municipalities? Choose from C or M or N to find out about other regions: ";
                    cin >> cmb;

                        if (cmb == 'C' || cmb == 'c'){
                        char citybarangays;
                        cout << "Here are all the cities in Eastern Samar: " << endl;
                        cout << "Borongan - Capital of Eastern Samar\n";
                        cout << "Would you like to find out more about Borongan and the barangays within it? (Y/N): ";
                        cin >> citybarangays;

                        if (citybarangays == 'Y' || citybarangays == 'y'){

                        cout << "The city of blah blah \n";
                        cout << "Information about city\n";
                        cout << "Here are all the barangays in :\n";

                        }
                        }

                        else if (cmb == 'M' || cmb == 'm'){
                        char municipal;
                        cout << "Here are all the municipalities in Eastern Samar: " << endl;
                        cout << "1. Arteche\n";
                        cout << "2. Balangiga\n";
                        cout << "3. Balangkayan\n";
                        cout << "4. Can-avid\n";
                        cout << "5. Dolores\n";
                        cout << "6. General MacArthur\n";
                        cout << "7. Giporlos\n";
                        cout << "8. Guiuan\n";
                        cout << "9. Hernani\n";
                        cout << "10. Jipapad\n";
                        cout << "11. Lawaan\n";
                        cout << "12. Llorente\n";
                        cout << "13. Maslog\n";
                        cout << "14. Maydolong\n";
                        cout << "15. Mercedes\n";
                        cout << "16. Oras\n";
                        cout << "17. Quinapondan\n";
                        cout << "18. Salcedo\n";
                        cout << "19. San Julian\n";
                        cout << "20. San Policarpo\n";
                        cout << "21. Sulat\n";
                        cout << "22. Taft\n";

                        cout << "Would you like to find out more about the municipalities and the barangays within them? (Y/N): ";
                        cin >> municipal;
                                                    
                        if (municipal == 'Y' || municipal == 'y'){
                        int barangays;
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{//INCOMPLETE
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";

                        break;
                        }
                        }
                        }
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                        cout << "Tagum - Capital of Davao del Norte\n";

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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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

                        cout << "Would you like to find out more about Mati and the barangays within it? (Y/N): ";
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
            char prov;
            char cmb;
            cout << "NCR - NATIONAL CAPITAL REGION";
            cout << "The National Capital Region (NCR), also known as Metropolitan Manila, is the capital region of the Philippines. It is located in the southwestern portion of Luzon, directly below Central Luzon." << endl;
            
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
                        int barangayCount = sizeof(CaloocanBrgys)/sizeof(CaloocanBrgys[0]);
                        cout << "You have chosen the city of Caloocan \n";
                        cout << "Mayor: Dale Gonzalo Rigor Malapitan \n";
                        cout << "Caloocan, city on Dagatdagatan Lagoon (Manila Bay), central Luzon, Philippines, adjacentto northern Manila. Founded in 1762, it became a municipality in 1815. Caloocan suffered much damage during World War II. Now part of Greater Manila, it is a growing center of industrialization as well as a resident suburb. Processed foods, textiles, and engineering prodcuts are its main industreis.\n";
                        cout << "The city of Caloocan's zip code is 1123 \n";
                        cout << "According to 2020 census, its total population is 606,293 \n";
                        cout << "Here are all the barangays in Caloocan : \n";
                        for (int i = 0; i < barangayCount; ++i) {
                            cout << i + 1 << ". " << CaloocanBrgys[i] << "\n";
                        }
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the city of Las Pinas \n";
                        cout << "Mayor: Imelda T. Aguilar \n";
                        cout << "Known nationwide for its bamboo organ, salt beds, jeepney factory, and the Las Pinas-Paranaque Wetlands, the city is distinguished as one of the Metro Manila's fastest-growing communities. Although it became a city only in 1997, Las Pinas was one of the first settlements at the outskirts of Manila. \n";
                        cout << "The city of Las Pinas zip code is 1700 \n";
                        cout << "According to 2020 census, its total population is 606,293 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the city of Makati \n";
                        cout << "Mayor: Abigial Binay \n";
                        cout << ": Makati, city, south-central Luzon, Philippines. A southern residential, financial, and industrial suburb of Manila, it has a large, modern manufacturing complex along its segment of the regional belt highway, where a number of national and foreign firms are located. Makati lies in the heart of the Metro Manila. The city is known for its upscale shopping malls with high fashion brands, restaurants and hotels, and is home to many affluent Filipinos. Makati is also a financial, commercial and economic center. \n";
                        cout << "The city of Makati's zip code is 1017 \n";
                        cout << "According to 2020 census, its total population is 629,616 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the city of Malabon \n";
                        cout << "Mayor: Jeannie Sandoval \n";
                        cout << "Malabon City is a 1st-class highly-urbanized city in the Philippines. It is part of the National Capital Region. Is known for its wide variety of seafoods and the well-known noodle, the pancit malabon.\n";
                        cout << "The city of Malabon's zip code is 1409 \n";
                        cout << "According to 2020 census, its total population is 380,522 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the city of Mandaluyong \n";
                        cout << "Mayor: Benjamin Santos Abalos Jr. \n";
                        cout << "It became a city in 1994 and in the early 2000s, Mandaluyong was proclaimed the 'Millenium City' by the city's leaders, noting its thriving local economy. Mandaluyong is also popularly known as 'New Tiger' of Metro Manila. Nowadays, Mandaluyong serves as an example of urban growth and cultural vibrancy.\n";
                        cout << "The city of Mandaluyong's zip code is 1550 \n";
                        cout << "According to 2020 census, its total population is 425,758 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the city of Manila \n";
                        cout << "Mayor: Honey Lacuna \n";
                        cout << "Manila serves as the center of culture, economy, education, and government in the Philippines. It is the most populous region of the country and one of the most densely populated in the world. It is also the main gateway for international travelers going to the Philippines by flight. Is best known for its remnants of Spanish colonial history, a showcase of Filipino art and culture, as well as a variety of classic yet delicious Filipino food. \n";
                        cout << "The city of Manila's zip code is 1000 \n";
                        cout << "According to 2020 census, its total population is 1,846,513 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the city of Marikina \n";
                        cout << "Mayor: Marcelino Teodoro \n";
                        cout << "The City of Marikina is considered one of the wealthiest local government units in the Philippines. Marikina is known as the Shoe Capital of the Philippines owing to its famous shoe industry. It is the biggest manufacturer of shoes in the Philippines, producing almost 70 percent of shoes made in the country.\n";
                        cout << "The city of Marikina's zip code is 1800 \n";
                        cout << "According to 2020 census, its total population is 456,059\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the city of Muntinlupa \n";
                        cout << "Mayor: Rozzano Rufino B. Diazon \n";
                        cout << "Muntinlupa is a landlocked highly urbanized city in the National Capital Region. Muntinlupa, among other things, is known for the New Bilibid Prison (NBP). The rich history and cultural heritage of the NBP make the local history of the city more interesting and insightful. \n";
                        cout << "The city of Muntinlupa's zip code is 1770 \n";
                        cout << "According to 2020 census, its total population is 543,445\n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the city of Navotas \n";
                        cout << "Mayor: John Reynald Marcelo \n";
                        cout << "Navotas is geographically located on the extreme northwestern shore of Metro Manila and is politically subdivided into two districts. It is known as the Commercial Fishing Hub of the Philippines, for the city has the third largest fish port in Asia and the largest in Southeast Asia. \n";
                        cout << "The city of Navotas zip code is 1485 \n";
                        cout << "According to 2020 census, its total population is 247,543 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 10:{
                        cout << "You have chosen the city of Paranaque\n";
                        cout << "Mayor: Eric Olvarez \n";
                        cout << "Paranaque in 1975 becoming a part of the National Capital region, Parañaque is now classified as a first class highly urbanized city in Metro Manila. Parañaque has long been noted for intricate hand embroidery, which has continued as a household industry.\n";
                        cout << "The city of Paranaque's zip code is 1710 \n";
                        cout << "According to 2020 census, its total population is 689,992 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the city of Pasay \n";
                        cout << "Mayor: Emi Rubiano \n";
                        cout << "Pasay, city, central Luzon, Philippines, situated on the eastern shore of Manila Bay. A major residential suburb of Manila (immediately north), it is well known for the nightclubs that line the waterfront along Roxas (formerly Dewey) Boulevard. Pasay is densely populated and highly commercialized.\n";
                        cout << "The city of Pasay's zip code is 1300 \n";
                        cout << "According to 2020 census, its total population is 440,656 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the city of Pasig \n";
                        cout << "Mayor: Vico Sotto \n";
                        cout << "Pasig city is approximately 12 kilometers east of Manila, on the southern tip of Pasig River. It is bordered by Quezon City and Marikina City on the North. Known as 'green city' for its environment-friendly initiatives led by its local government.\n";
                        cout << "The city of Pasig's zip code is 1600 \n";
                        cout << "According to 2020 census, its total population is 803,159 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the city of Quezon \n";
                        cout << "Mayor: Joy Belmonte-Alimurung \n";
                        cout << "Quezon city is the most populated and wealthiest city of the Philippines. It was also the country's capital between 1948 and 1976. The city is part of Metropolitan Manila. It is an important governmental, economic and educational center and has one of the most consistent sustainability track records in the Philippines. Quezon City is known for its culture, entertainment industry and media, and is aptly called the City of Stars.\n";
                        cout << "The city of Quezon's zip code is 1015 \n";
                        cout << "According to 2020 census, its total population is 2,960,992 \n";
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the city of San Juan \n";
                        cout << "Mayor: Francis Zamora \n";
                        cout << "San Juan is the least-extensive city in the Philippines with a total area of just 595 hectares (2.30 sq mi). San Juan is bounded by Quezon City on the north and east, Mandaluyong on the south, and the City of Manila in the west. The city is known historically for the site of the first battle of the Katipunan, the organization which led the 1896 Philippine Revolution against the Spanish Empire. Notable landmarks today such as Pinaglabanan Shrine and heritage homes are located in the city. \n";
                        cout << "The city of San Juan's zip code is 1500 \n";
                        cout << "According to 2020 census, its total population is 126,347 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the city of Taguig \n";
                        cout << "Mayor: Lani Cayetano \n";
                        cout << "Taguig is an important center for the country's international diplomacy, hosting several embassies. The city also home to the headquarters of several major multinational corporations. Taguig contains the Bonifacio Global City (popularly known simply as BGC), Metro Manila's second most important business district and a major tourism, shopping, dining and entertainment destination. \n";
                        cout << "The city of Taguig's zip code is 1208 \n";
                        cout << "According to 2020 census, its total population is 886,722 \n";
                        cout << "Here are all the barangays in : \n";
                        cout << "1. ";
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the city of Valenzuela \n";
                        cout << "Mayor: Wes Gatchalian \n";
                        cout << "Valenzuela city is a highly urbanized, first-class city based on income classification and number of population. The City of Valenzuela is known as the 'Northern Gateway to Metro Manila' due to two major highways traversing it to the MacArthur Highway and the North Luzon Expressway.\n";
                        cout << "The city of Valenzuala's zip code is 1440 \n";
                        cout << "According to 2020 census, its total population is 714,978 \n";
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

                        cout << "The municipality of Pateros \n";
                        cout << "Mayor: Miguel F. Ponce III \n";
                        cout << "Pateros, officially the Municipality of Pateros, is the lone municipality of Metro Manila. This municipality is famous for its duck-raising industry and especially for producing balut, a Filipino delicacy, which is a boiled, fertilized duck egg. Pateros is also known for the production of red salty eggs and inutak, a local rice cake. \n";
                        break;
                

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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                        
                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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

                        cout << "Would you like to find out more about Baguio and the barangays within it? (Y/N): ";
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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

                        cout << "Would you like to find out more about Tabuk and the barangays within it? (Y/N): ";
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                        
                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 37:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 38:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 39:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 20:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 21:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 22:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 23:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 24:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                        
                        case 25:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 26:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 27:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 28:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                        
                        case 29:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 30:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 31:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 32:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 33:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 34:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 35:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 36:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 12:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 13:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 14:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 15:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 16:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 17:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 18:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 19:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
                                                        
                        cout << "Enter a number corresponding to a municipality to get information about it: ";
                        cin >> barangays;
                                                        
                        switch (barangays){
                        case 1:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 2:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 3:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 4:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 5:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 6:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 7:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 8:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 9:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }
                                                
                        case 10:{
                        cout << "You have chosen the municipality of \n";
                        
                        
                        break;
                        }

                        case 11:{
                        cout << "You have chosen the municipality of \n";
                        
                        
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
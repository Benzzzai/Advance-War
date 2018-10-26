// #include <QMainWindow>

//class MainWindow :: public QMainWindow {
	
class Gameobject;

class Unit;

class Batiment;

class Terrain;

class Player;

void creatGame(Gameobject[],Player po, Player pb);

void endturn(Player po,Player pb,Player* actif);



class Gameobject {

	int posX;

	int posY;

public:
	Gameobject(int x, int y){

		posX = x;

		posY = y;
	
	}
};


class Unit :: public Gameobject {

	int type;

	bool played = false;

	// vitesse, atk, ... dans le constructeur rentrer que type puis tableau avec toutes cara (static au début progra)

public :

	Unit(int x, int y, int t){

		type = t;

		Gameobject(x,y);

	}
	Move (int direction){
		if (direction == 0){
			posY ++;
		} else if (direction == 1){
			posX ++;
		} else if (direction == 2){
			posY --;
		} else {
			posX --
		}
	}	
		
};

class Batiment :: public Gameobject {
	int type;
public :
	Batiment(int x, int y, int t){
		type = t;
		Gameobject(x,y);
	}
};

class Terrain :: public Gameobject {
	int type;
public :
	Terrain(int x, int y, int t){
		type = t;
		Gameobject(x,y);
	}	
};

class Player {
	int money;
	Gameobject army[];
public:
	earnmoney(){
		money++;
	}
	buyUnit(Unit){
		Unit* uni = new Unit();
		army.add(uni)
		money -= cara[c][uni.type];
	}	
	resetUnit() {
		for (unit in army){
			unit.played = false;
};

class Cursor :: public Gameobject{
}


void creatGame(Gameobject[],Player po, Player pb){
	// crée des objets et les rajoute dans les 3 listes, aléatoire ou déterminés ??
}

void Turn (Player po,Player pb,Player* actif){
	if (actif == &po){
		actif = &pb;
	}
	else if (actif == &pb){
		actif = &po;
	} 
	*actif.earnmoney;
	*active.resetUnite;
}
	

int main() {
       
	Player OrangeStar = new Player();
	Player BlueMoon = new Player();
	Terrain* terrainlist = new Terrain[];
	createGame(&terrainlist, &OrangeStar, &BlueMoon);
	// 3 listes : celle du joueur actif, celle du joueur pas actif et les terrains. Dans les fonctions, utiliser la/les listes necessaires
	Player* actif = &OrangeStar;
			
	static bool run = true;
	while (run){
		//keypressed
		//notify view
			
	}	
	return 0;
}

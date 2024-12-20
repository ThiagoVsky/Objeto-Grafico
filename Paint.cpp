#include "Paint.h"


Paint::Paint() {
	cout << "Paint: Constructor" << endl;
}

void Paint::addObjGrafico(TYPE type, int x1, int y1, int x2, int y2, COR cor){
	cout << "Paint: addObjGrafico" << endl;

    if (x1 < 0 || x2 < 0 || y1 < 0 || y2 < 0) {
        cerr << "As cordenadas devem ter valores de 0 para cima." << endl;
        return;
    }
    if (!(x1 < x2) || !(y1 < y2)) {
        cerr << "Os números da posição X2 e Y2 devem ser maiores que seus pares da posição 1." << endl;
        return;
    }
    if ((x2 - x1) == (y2 - y1)) addSquare(x1, y1, x2 - x1, cor);
    else {
        if (type == RECTANGLE) objGraficos.push_back(new Rectangle(x1, y1, x2, y2, cor));
        else if (type == LINE) objGraficos.push_back(new Line(x1, y1, x2, y2, cor));
        else cerr << "Tipo especificado incorreto. Utilize as respectivas funções para criar outros métodos.";
    }
}

void Paint::addSquare(int posx, int posy, int base, COR cor) {
    cout << "Paint: addSquare" << endl;

    if (posx < 0 || posy < 0 || base <= 0) {
        cerr << "As cordenadas devem ter valores de 0 para cima. A base deve ter número acima de 0 a menos que queira criar uma linha" << endl;
        return;
    }
    objGraficos.push_back(new Square(posx, posy, base, cor));

}

void Paint::addOval(int posx, int posy, int sRadius, int bRadius, COR cor) {
    cout << "Paint: addOval" << endl;

    if (posx < 0 || posy < 0 || sRadius <= 0 || bRadius <= 0) {
        cerr << "As cordenadas devem ter valores de 0 para cima. Os raios devem ser maiores que 0." << endl;
        return;
    }
    if (bRadius == sRadius) addCircle(posx, posy, sRadius, cor);
    else objGraficos.push_back(new Oval(sRadius, bRadius, posx, posy, cor));

}
void Paint::addCircle(int posx, int posy, int Radius, COR cor) {
    cout << "Paint: addCircle" << endl;
    objGraficos.push_back(new Circle(Radius, posx, posy, cor));
}


void Paint::remove(int id){
	cout << "Paint: remove (com id)" << endl;
}
void Paint::remove(){
	cout << "Paint: remove (sem id)" << endl;
}
void Paint::move(int id, int dx, int dy){
	cout << "Paint: move" << endl;
}
void Paint::resize(int id, int x2, int y2){
	cout << "Paint: resize" << endl;
}
string Paint::draw(){
	cout << "Paint: draw" << endl;
    stringstream ss;
    ss << endl;
    for (int i = 0; i < objGraficos.size(); i++) {
        ss
            << objGraficos[i]->toString()
            << endl;
    }
    cout << ss.str();
    return ss.str();
}
void Paint::read(string label) {
	cout << "Paint: read" << endl;
}
void Paint::write(string label){
	cout << "Paint: write" << endl;
}


/********************************************************
* 
* 
* Código copiado da Lista 1 Tarefa 3 para leitura e escrita de dados
* 
* 
void Game::saveGame() {
    cout << "deseja realmente salvar o jogo?" << endl;
    if (verify()) {
        int saveArr[]{
            getCharLevel(),
            getCharXp(),
            getCharLife(),
            level->getFloor()
        };
        string path1 = "C:\\ProgramData\\a_torre_jogo.save";
        string path2 = "C:\\ProgramData\\a_torre_jogo_nome.save";
        ofstream file1(path1);
        ofstream file2(path2);
        if (file1.is_open() && file2.is_open()) {
            int sizeArr = sizeof(saveArr) / sizeof(saveArr[0]);
            for (int i = 0; i < sizeArr; i++) {
                file1 << saveArr[i] << " ";
            }
            file2 << getCharName();
            Sleep(300);
            cout << "Jogo salvo com sucesso!" << endl;
            system("pause");
            system("cls");
        }
        else {
            cerr << "Não foi possível acessar o arquivo para escrita";
            system("pause");
            exit(-2);
        }
        file1.close();
        file2.close();
    }
}
bool Game::loadGame() {
    cout << "Carregando jogo..." << endl;
    cout << "Deseja carregar o jogo antigo?" << endl;
    if (verify()) {
        int loadArr[4]{ };
        string path1 = "C:\\ProgramData\\a_torre_jogo.save";
        string path2 = "C:\\ProgramData\\a_torre_jogo_nome.save";
        ifstream file1(path1);
        ifstream file2(path2);
        if (file1.is_open() && file2.is_open()) {
            int sizeArr = sizeof(loadArr) / sizeof(loadArr[0]);
            for (int i = 0; i < sizeArr; i++) {
                file1 >> loadArr[i];
            }
            setCharLevel(loadArr[0]);
            addCharXp(loadArr[1]);
            setCharLife(loadArr[2]);
            string nome;
            file2 >> nome;
            setCharName(nome);
            level = new Level(loadArr[3], nome);
            file1.close();
            file2.close();
            system("cls");
            Sleep(300);
            cout << "Jogo carregado com sucesso!" << endl;
            system("pause");
            system("cls");
            return true;
        }
        else {
            cerr << "Não foi possível acessar o arquivo para leitura. Tente novamente mais tarde." << endl;
            system("pause");
        }
        file1.close();
        file2.close();
    }
    system("cls");
    return false;
}
********************************************************/
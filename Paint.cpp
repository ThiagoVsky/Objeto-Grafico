#include "Paint.h"

Paint::Paint() {
	cout << "Paint: Constructor" << endl;
}

void Paint::addObjGrafico(int type, int x1, int y1, int x2, int y2, COR cor = BRANCO){
	cout << "Paint: addObjGrafico" << endl;
	//garantir que x1 sempre menor que x2
	//garantir que y1 sempre menor que y2

	//switch case baseado no type

	//QUADRADO e RETANGULO tem o mesmo switch
	// se (x1 - x2 == y1 - y2)
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
void Paint::draw(){
	cout << "Paint: draw" << endl;
    // chamar toString dos objetos criados
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
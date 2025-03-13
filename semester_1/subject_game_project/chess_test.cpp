#include <iostream>
/*
class ChessObject {
public:
    int color;
    int pointer;
    char block;

    ChessObject() : color(0), pointer(0), block(' ') {} // 기본 생성자
    ChessObject(int c, int p, char b) : color(c), pointer(p), block(b) {} // 파라미터 생성자

    // 가상 소멸자 추가
    virtual ~ChessObject() {}

    // 가상 함수
    virtual void print() const {
        if (color == 1) {
            if (block == 'p')printf("○");
            else if (block == 'k')printf("◇");
            else if (block == 'Q')printf("♡");
            else if (block == 'K')printf("▩");
            else if (block == 'B')printf("♧");
            else printf("☆");//R
        }
        else {
            if (block == 'p')printf("●");
            else if (block == 'k')printf("◆");
            else if (block == 'Q')printf("♥");
            else if (block == 'K')printf("▒");
            else if (block == 'B')printf("♣");
            else printf("★");//R
        }
    }
    virtual void draw() {}
    virtual void move() {}
};

class Pawn : public ChessObject {
public:
    Pawn(int c) : ChessObject(c, 1, 'p') {}
    int cnt = 0; // 한번 움직이면 1칸씩
};

class Knight : public ChessObject {
public:
    Knight(int c) : ChessObject(c, 3, 'k') {}
};

class Bishop : public ChessObject {
public:
    Bishop(int c) : ChessObject(c, 3, 'B') {}
};

class Rook : public ChessObject {
public:
    Rook(int c) : ChessObject(c, 5, 'R') {}
};

class Queen : public ChessObject {
public:
    Queen(int c) : ChessObject(c, 9, 'Q') {}
};

class King : public ChessObject {
public:
    King(int c) : ChessObject(c, 100, 'K') {}
};

class Field : public ChessObject {
public:
    ChessObject*** field_logic;

    Field() {
        field_logic = new ChessObject * *[17];
        for (int i = 0; i < 17; i++) {
            field_logic[i] = new ChessObject * [17];
            for (int j = 0; j < 17; j++) {
                field_logic[i][j] = nullptr;
            }
        }
    }

    ~Field() {
        for (int i = 0; i < 17; ++i) {
            for (int j = 0; j < 17; ++j) {
                delete field_logic[i][j];
            }
            delete[] field_logic[i];
        }
        delete[] field_logic;
    }
};

class MakeObject : public Field {
public:
    MakeObject() {
        // Place pawns
        for (int j = 0; j < 8; j++) {
            field_logic[3][2 * j + 1] = new Pawn(1);
            field_logic[13][2 * j + 1] = new Pawn(2);
        }

        // Place other pieces
        field_logic[1][1] = new Rook(1);
        field_logic[1][3] = new Knight(1);
        field_logic[1][5] = new Bishop(1);
        field_logic[1][7] = new Queen(1);
        field_logic[1][9] = new King(1);
        field_logic[1][11] = new Bishop(1);
        field_logic[1][13] = new Knight(1);
        field_logic[1][15] = new Rook(1);

        field_logic[15][1] = new Rook(2);
        field_logic[15][3] = new Knight(2);
        field_logic[15][5] = new Bishop(2);
        field_logic[15][7] = new King(2);
        field_logic[15][9] = new Queen(2);
        field_logic[15][11] = new Bishop(2);
        field_logic[15][13] = new Knight(2);
        field_logic[15][15] = new Rook(2);
    }

    // MakeObject 클래스에서는 draw() 함수를 오버라이드하여 체스 보드를 출력
    void field_block(int i, int j) {

        if (i == 16 && j == 16)printf("┘");
        if (j == 0 && i >= 1 && i <= 15)printf((i % 2 == 0) ? "├" : "│");//
        else if (j == 16 && i >= 1 && i <= 15)printf((i % 2 == 0) ? "┤" : "│");//
        else if (i >= 1 && i <= 15) {
            if (i % 2 == 0 && j >= 1 && j <= 15)printf((j % 2 == 1) ? "─" : "┼");
            else printf((j % 2 == 0) ? "│" : " ");
        }
        else if (i == 0 && j == 0)printf("┌");
        else if (i == 0 && j == 16)printf("┐");
        else if (i == 16 && j == 0)printf("└");
        else if (i == 0 && j >= 1 && j <= 15)printf((j % 2 == 0) ? "┬" : "─");
        else if (i == 16 && j >= 1 && j <= 15)printf((j % 2 == 1) ? "─" : "┴");

    }

    void draw() override {
        system("cls");
        for (int i = 0; i < 17; i++) {
            for (int j = 0; j < 17; j++) {
                if (field_logic[i][j]) {
                    field_logic[i][j]->print();
                }
                else {
                    field_block(i, j);
                    //printf("%d",0);
                }
            }
            std::cout << "\n";
        }
    }

    void move() override {

    }
    ~MakeObject() {
        for (int i = 0; i < 17; ++i) {
            for (int j = 0; j < 17; ++j) {
                delete(field_logic[i][j]);
            }
            delete[] field_logic[i];
        }
        delete[] field_logic;
    }
};
int user_input() {
    scanf_s("%d");
}
void play(int choice) {
    MakeObject chess;
    chess.draw();

    chess.move();
    // Game logic goes here
    while (true) {
        user_input();
        system("cls"); // Clear console screen (Windows specific)
        chess.draw();
    }
}
*/
class chess {
private:
    char color;
    int score;
public:
    virtual void move() {}
    virtual void up() {}
    virtual void down() {}
    virtual void left() {}
    virtual void right() {}
    virtual void cross() {}
    chess(char c,int s):color(c),score(s) {}
    chess() : color('n'), score(0) {}
};
class knight : public chess {
    //void move() override{}
};
class pawn : public chess {
    //void move() override{}

};
class rook : public chess {
    //void move() override{}

};
class bishop : public chess {
    //void move() override{}

};
class king : public chess {

};
class queen : public chess {

};
int main() {
    chess** ch = new chess*[17];
    for(int i = 0;i < 17;i++){
        ch[i] = new chess[17];
    }
}
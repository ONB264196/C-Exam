#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include"34.h"

#define _03_

//printfその1
#ifdef _03_  
main() {
	//""の中身を表示しろ。ここでは実行すると「aaa」が表示される。
	printf("aaa");

	//改行しろ。nはnext lineの頭文字。
	printf("\n");

	//xというカード(実際にはメモリ)を用意する。x以外も可。
	int x;

	//xの中身を123としろ(xの中身にに123を書き込め)。
	x = 123;

	//xを10進数で表示しろ。dはdecimalの頭文字。
	printf("%d", x);


	system("pause>0");
	return 0;
}
#endif


//printfその2
#ifdef _04_
main() {
	int X;
	int Y;
	X = 300;
	Y = 560;
	
	//printfは""の中身を左から順に表示し、%dが来たら後ろの変数(X,Y)を順に参照して表示する。
	printf("クーラードリンク %dz\n肉焼き機 %dz", X, Y);
	

	system("pause>0");
	return 0;
}
#endif


//計算その1
#ifdef _05_
main() {
	//四則演算
	int x;
	int y;
	x = 31;
	y = 11;

	printf("%d+%d=%d\n", x, y, x + y);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d*%d=%d\n", x, y, x * y);
	printf("%d/%d=%d\n", x, y, x / y);
	printf("%d/%dの余りは%d\n", x, y, x % y);

	printf("\n\n\n\n\n");


	//余り付き除算
	printf("%d/%d=%d...%d", x, y, x / y, x % y);


	system("pause>0");
	return 0;
}
#endif


//計算その2
#ifdef _06_
main() {
	//計算の簡略化
	int x;
	x = 31;

	x += 11;
	printf("%3d\n", x);
	x -= 11;
	printf("%3d\n", x);
	x *= 11;
	printf("%3d\n", x);
	x /= 11;
	printf("%3d\n", x);

	printf("\n\n\n\n");


	//カウント計算
	int y;
	y = 0;

	y++;
	printf("%3d\n", y);
	y++;
	printf("%3d\n", y);
	y++;
	printf("%3d", y);


	system("pause>0");
	return 0;
}
#endif


//scanf
#ifdef _07_
main() {
	//キーボードからタイプした数を表示させる
	int x;
	scanf_s("%d", &x);
	printf("%d", x);

	printf("\n\n\n\n");


	//※上のプログラムを実行後に作動
	//入力した数を5で割る
	int y;
	scanf_s("%d", &y);
	printf("%d...%d", y / 5, y % 5);


	system("pause>0");
	return 0;
}
#endif


//ifその1
#ifdef _08_
main() {
	//条件付け
	int x;
	x = 0;

	//カウントアップして2だったら表示
	x++;
	if (x == 2) { printf("%3d\n", x); }
	x++;
	if (x == 2) { printf("%3d\n", x); }
	x++;
	if (x == 2) { printf("%3d\n", x); }
	x++;
	if (x == 2) { printf("%3d\n", x); }

	printf("\n\n\n\n");

	int y;
	y = 0;

	//カウントアップして3より小さかったら表示
	y++;
	if (y < 3) { printf("%3d\n", y); }
	y++;
	if (y < 3) { printf("%3d\n", y); }
	y++;
	if (y < 3) { printf("%3d\n", y); }
	y++;
	if (y < 3) { printf("%3d\n", y); }

	//「==」イコール、等しい
	//「!=」ノットイコール、以外
	//「<」より小さい、未満
	//「<=」以下
	//「>」より大きい
	//「>=」以上
	

	system("pause>0");
	return 0;
}
#endif


//ifその2
#ifdef _09_
main() {
	//条件付け
	int x;
	x = 0;
	
	//カウントアップして2以上かつ4以下なら表示
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	//「&&」どちらも満たす

	printf("\n\n\n\n\n");

	int y;
	y = 0;

	//カウントアップして2以下または3より大きいなら表示
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	//「||」どちらか一方でも満たす


	system("pause>0");
	return 0;
}
#endif


//ifその3
#ifdef _10_
main() {
	//ランク付け(分岐２個)
	int RecollectionRate;
	scanf_s("%3d", &RecollectionRate);

	if (RecollectionRate > 70) {printf("%d\nTrack Complete", RecollectionRate);}
	else {printf("Track Lost");}

	printf("\n\n\n\n\n");

	//ランク付け(分岐３個以上)
	int score;
	scanf_s("%8d", &score);

	if (score >= 9900000) { printf("EX+"); }
	else if (score >= 9800000) { printf("EX"); }
	else if (score >= 9500000) { printf("AA"); }
	else if (score >= 9200000) { printf("A"); }
	else if (score >= 8900000) { printf("B"); }
	else if (score >= 8600000) { printf("C"); }
	else { printf("D"); }


	system("pause>0");
	return 0;
}
#endif


//while
#ifdef _11_
main() {
	//～の間、命令を繰り返させる
	int a;
	a = 0;

	while (a < 5)
	{
		a++;
		printf("%3d\n", a);
	}


	system("pause>0");
	return 0;
}
#endif


//for
#ifdef _12_
main() {
	//繰り返しその2
	int a;
	for (a = 0; a < 5; a++)
	{
		printf("%3d", a);
	}

	printf("\n\n\n\n\n");

	//草を生やす
	int b;
	for (b = 0; b < 5; b++)
	{
		printf("w");
	}


	system("pause>0");
	return 0;
}
#endif


//二重ループ
#ifdef _13_
main() {
	//２重ループ
	
	//九九の表
	int a, b;
	for (b = 1; b <= 9; b++) {
		for (a = 1; a <= 9; a++) {
			printf("%3d", a * b);
		}
		printf("\n");
	}
	//外側で縦にカウントアップ、内側で横にカウントアップしている


	system("pause>0");
	return 0;
}
#endif


//for & if
#ifdef _14_
main() {
	//for & if
	int x;
	//forでカウントアップ
	for (x = 0; x < 13; x++) {
		//ifで条件付け
		if (x < 2 || x>8) {
			printf("%3d", x);
		}
		else {
			printf(" ");
		}
	}


	system("pause>0");
	return 0;
}
#endif


//%
#ifdef _15_
main() {
	//余りで遊ぶ
	int x, y, a;
	for (x = 0; x < 7; x++) {
		for (y = 0; y < 7; y++) {
			a = (x + y) % 4;
			if (a == 0) {
				printf("〇");
			}
			else if (a == 1) {
				printf("×");
			}
			else if (a == 2) {
				printf("□");
			}
			else {
				printf("△");
			}
		}
		printf("\n");
	}
	//0～6の縦横二重ループを用意し、縦と横を足して4で割った余りに応じて記号を表示している


	system("pause>0");
	return 0;
}
#endif


//float
#ifdef _16_
main() {
	//整数
	int X;
	X = 13;
	printf("%d\n", X);

	//小数
	float f;
	f = 3.14;
	printf("%f\n", f);

	//小数になる除算
	f = 13;
	printf("%f", f / 17);


	system("pause>0");
	return 0;
}
#endif


//struct
#ifdef _17_
//カードセット
//セットの内容
struct DATA {
   int BulletSpeed;
   int FireRate;
   int Capacity;
};

//セットの名前
struct DATA AEK971;
struct DATA ACE23;

main() {
	AEK971.BulletSpeed = 580;
	AEK971.FireRate = 900;
	AEK971.Capacity = 30;
	printf("AEK-971：弾速%3d　レート%3d　装弾数%3d+1\n", AEK971.BulletSpeed, AEK971.FireRate, AEK971.Capacity);
	ACE23.BulletSpeed = 620;
	ACE23.FireRate = 770;
	ACE23.Capacity = 35;
	printf("ACE-23：弾速%3d　レート%3d　装弾数%3d+1", ACE23.BulletSpeed, ACE23.FireRate, ACE23.Capacity);


	system("pause>0");
	return 0;
}
#endif


//配列その1
#ifdef _18_
main() {
	int d[3];
	d[0] = 225;
	d[1] = 256;
	d[2] = 289;

	int x;
	for (x = 0; x < 3; x++) {
		printf("%5d\n", d[x]);
	}


	system("pause>0");
	return 0;
}
#endif


//配列その2
#ifdef _19_
struct Location {
		int Htem;
		int Ltem;
};
main() {

	struct Location C[3];
	C[0].Htem = 12;
	C[0].Ltem = 5;
	C[1].Htem = 18;
	C[1].Ltem = 11;
	C[2].Htem = 19;
	C[2].Ltem = 6;

	printf("LON　%d/%d℃\nBJS　%d/%d℃\nNY　%d/%d℃", C[0], C[1], C[2]);


	system("pause>0");
	return 0;
}
#endif


//配列その3
#ifdef _20_
main() {
	//1つ余分に用意する(仕様上最後に“\0”が書き込まれるから)
	char m[7] = "Arcaea";
	int p;
	for (p = 0; p < 6; p++) {
		printf("%c", m[p]);
	}


	system("pause>0");
	return 0;
}
#endif


//関数
#ifdef _22_
//改行関数
NextLine() {
	printf("\n");
}

//トリル関数
LTrill() {
	printf(" __\n   __\n __\n   __\n __\n   __\n");
}
CTrill() {
	printf("   __\n     __\n   __\n     __\n   __\n     __\n");
}
RTrill() {
	printf("     __\n       __\n     __\n       __\n     __\n       __\n");
}

//階段関数
RLStairs() {
	printf(" __\n   __\n     __\n       __\n");
}
LRStairs() {
	printf("       __\n     __\n   __\n __\n");
}

//ポーズ関数
Finish() {
	_getch();
}

main() {
	RTrill();
	CTrill();
	RLStairs();
	LRStairs();
	LTrill();

	Finish();
}
#endif


//値を受け取る関数
#ifdef _23a_
Finish() {
	_getch();
}
NextLine() {
	printf("\n");
}
//草関数
Grass() {
	printf("w");
}
//草階段関数
Grasses(num) {
	for (int x = 0; x < num; x++) {
		Grass();
	}
	NextLine();
}


main() {
	for (int y = 1; y < 6; y++) {
		Grasses(y);
	}
	Finish();
}
#endif


#ifdef _23b_
Finish() {
	_getch();
}
NextLine() {
	printf("\n");
}
//草関数
Grass() {
	printf("w");
}
//草むら関数
GrassMatrix(int row, int col) {
	for (int y = 0; y < row; y++) {
		Grasses(col);
	}
}


main() {
	//(縦,横)
	GrassMatrix(6, 4);

	Finish();
}
#endif


//値を返す関数
#ifdef _24_
finish() {
	_getch();
}
nextline() {
	printf("\n");

}

//表示関数
dispInt(int a) {
	printf("%d", a);
}
dispFloat(float a) {
	printf("%f", a);
}

//加算関数
int addAB(int a, int b) {
	return a + b;
}

//除算関数
float divAB(float a, float b) {
	return a / b;
}


main() {
	int ans = addAB(7, 5);
	dispInt(ans);

	nextline();

	float ansf = divAB(7, 5);
	dispFloat(ansf);

	finish();
}

#endif


//25,26は動画参照(丸投げ)


//ポインタ
#ifdef _27_
void finish() {
	_getch();
}
void nextline() {
	printf("\n");

}

int main() {
	int a;
	a = 5;
	//書き換えられる前のaを表示
	printf("%d", a);

	//ポインタを使ってpにaのアドレスをひもづけ
	int* p;
	p = &a;
	//aを0に書き換え
	*p = 0;

	nextline();
	//書き換えられたaを表示
	printf("%d", a);

	finish();

}
#endif


//ポインタを使う目的
#ifdef _28a_
//指定した変数を0に書き換える
void nextline() {
	printf("\n");

}
void setZeroInt(int* p) {
	*p = 0;
}

main() {
	int x;
	x = 7;
	printf("%d", x);
	nextline();

	//0にするxのアドレスを()の中に指定
	setZeroInt(&x);
	printf("%d", x);


	system("pause>0");
	return 0;
}
#endif


#ifdef _28b_
//指定した変数を0に書き換える
void setZeroInt(int* p) {
	*p = 0;
}

main() {
	int x;

	scanf_s("%d", &x);
	//0にするxのアドレスを()の中に指定
	setZeroInt(&x);
	printf("%d", x);


	system("pause>0");
	return 0;
}
#endif


//構造体とポインタ
#ifdef _29_
void nextline() {
	printf("\n");

}

//セット内容
struct S {
	int x;
	int y;
};
//セット名
struct S a;


main() {
	//構造体(セット)の内容(変数)を定義する場合は「.」
	a.x = 11;
	a.y = 13;
	printf("%3d%3d", a.x, a.y);
	nextline();

	struct S* p;
	p = &a;
	//構造体(セット)の内容(変数)をポインタで変える場合は「->」
	p->x = 17;
	p->y = 23;
	//ポインタで置き換え後の
	printf("%3d%3d", a.x, a.y);


	system("pause>0");
	return 0;
}

#endif


//配列とポインタ
#ifdef _30_
main() {
	//配列でaに数を入れる
	int a[3];
	for (int i = 0; i < 3; i++) {
		a[i] = i + 1;
	}

	//ポインタで書き換える
	int* p;
	p = a;
	for (int i = 0; i < 3; i++) {
		p[i] = 0;
	}

	//順に表示
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}


	system("pause>0");
	return 0;
}
#endif


#ifdef _30b_
//ポインタで書き換える過程を関数化
void setZeroArray(int* p) {
	for (int i = 0; i < 3; i++) {
		p[i] = 0;
	}
}
main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		a[i] = i + 1;
	}

	setZeroArray(a);

	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}


	system("pause>0");
	return 0;
}
#endif


#ifdef _30c_
//aに数を入れるのとポインタでの書き換えを1つのループ内にまとめる
int main() {
	int a[3];
	int* p;
	p = a;
	for (int i = 0; i < 3; i++) {
		a[i] = i + 1;
		p[i] = 0;
		printf("%2d", a[i]);
	}


	system("pause>0");
	return 0;
}

#endif


//構造体配列とポインタ
#ifdef _33_
struct V {
	int x;
	int y;
};
//セットを配列化
struct V a[3];

void setZeroStructArray(struct V* p) {
	for (int i = 0; i < 3; i++) {
		p[i].x = 0;
		p[i].y = 0;
	}
}


int main() {
	//構造体配列の"x = 32"と"y = 64"それぞれにループで1～3をかける
	for (int i = 0; i < 3; i++) {
		a[i].x = 32 * (i + 1);
		a[i].y = 64 * (i + 1);
		printf("%d %d\n", a[i].x, a[i].y);
	}
	printf("\n\n");

	//0に書き換え
	setZeroStructArray(a);

	//書き換え後を表示
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", a[i].x, a[i].y);
	}


	system("pause>0");
	return 0;
}
#endif


#ifdef _34_
#include"34.h"
int main() {
	char a[8] = "科学";
	setString(a, "化学");
	printf("%s", a);

	system("pause>0");
	return 0;
}
#endif
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include"34.h"

#define _03_

//printf����1
#ifdef _03_  
main() {
	//""�̒��g��\������B�����ł͎��s����Ɓuaaa�v���\�������B
	printf("aaa");

	//���s����Bn��next line�̓������B
	printf("\n");

	//x�Ƃ����J�[�h(���ۂɂ̓�����)��p�ӂ���Bx�ȊO���B
	int x;

	//x�̒��g��123�Ƃ���(x�̒��g�ɂ�123����������)�B
	x = 123;

	//x��10�i���ŕ\������Bd��decimal�̓������B
	printf("%d", x);


	system("pause>0");
	return 0;
}
#endif


//printf����2
#ifdef _04_
main() {
	int X;
	int Y;
	X = 300;
	Y = 560;
	
	//printf��""�̒��g�������珇�ɕ\�����A%d����������̕ϐ�(X,Y)�����ɎQ�Ƃ��ĕ\������B
	printf("�N�[���[�h�����N %dz\n���Ă��@ %dz", X, Y);
	

	system("pause>0");
	return 0;
}
#endif


//�v�Z����1
#ifdef _05_
main() {
	//�l�����Z
	int x;
	int y;
	x = 31;
	y = 11;

	printf("%d+%d=%d\n", x, y, x + y);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d*%d=%d\n", x, y, x * y);
	printf("%d/%d=%d\n", x, y, x / y);
	printf("%d/%d�̗]���%d\n", x, y, x % y);

	printf("\n\n\n\n\n");


	//�]��t�����Z
	printf("%d/%d=%d...%d", x, y, x / y, x % y);


	system("pause>0");
	return 0;
}
#endif


//�v�Z����2
#ifdef _06_
main() {
	//�v�Z�̊ȗ���
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


	//�J�E���g�v�Z
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
	//�L�[�{�[�h����^�C�v��������\��������
	int x;
	scanf_s("%d", &x);
	printf("%d", x);

	printf("\n\n\n\n");


	//����̃v���O���������s��ɍ쓮
	//���͂�������5�Ŋ���
	int y;
	scanf_s("%d", &y);
	printf("%d...%d", y / 5, y % 5);


	system("pause>0");
	return 0;
}
#endif


//if����1
#ifdef _08_
main() {
	//�����t��
	int x;
	x = 0;

	//�J�E���g�A�b�v����2��������\��
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

	//�J�E���g�A�b�v����3��菬����������\��
	y++;
	if (y < 3) { printf("%3d\n", y); }
	y++;
	if (y < 3) { printf("%3d\n", y); }
	y++;
	if (y < 3) { printf("%3d\n", y); }
	y++;
	if (y < 3) { printf("%3d\n", y); }

	//�u==�v�C�R�[���A������
	//�u!=�v�m�b�g�C�R�[���A�ȊO
	//�u<�v��菬�����A����
	//�u<=�v�ȉ�
	//�u>�v���傫��
	//�u>=�v�ȏ�
	

	system("pause>0");
	return 0;
}
#endif


//if����2
#ifdef _09_
main() {
	//�����t��
	int x;
	x = 0;
	
	//�J�E���g�A�b�v����2�ȏォ��4�ȉ��Ȃ�\��
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	x++;
	if (x >= 2 && x <= 4) { printf("%3d\n", x); }
	//�u&&�v�ǂ����������

	printf("\n\n\n\n\n");

	int y;
	y = 0;

	//�J�E���g�A�b�v����2�ȉ��܂���3���傫���Ȃ�\��
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	y++;
	if (y <= 2 || y > 3) { printf("%3d\n", y); }
	//�u||�v�ǂ��炩����ł�������


	system("pause>0");
	return 0;
}
#endif


//if����3
#ifdef _10_
main() {
	//�����N�t��(����Q��)
	int RecollectionRate;
	scanf_s("%3d", &RecollectionRate);

	if (RecollectionRate > 70) {printf("%d\nTrack Complete", RecollectionRate);}
	else {printf("Track Lost");}

	printf("\n\n\n\n\n");

	//�����N�t��(����R�ȏ�)
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
	//�`�̊ԁA���߂��J��Ԃ�����
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
	//�J��Ԃ�����2
	int a;
	for (a = 0; a < 5; a++)
	{
		printf("%3d", a);
	}

	printf("\n\n\n\n\n");

	//���𐶂₷
	int b;
	for (b = 0; b < 5; b++)
	{
		printf("w");
	}


	system("pause>0");
	return 0;
}
#endif


//��d���[�v
#ifdef _13_
main() {
	//�Q�d���[�v
	
	//���̕\
	int a, b;
	for (b = 1; b <= 9; b++) {
		for (a = 1; a <= 9; a++) {
			printf("%3d", a * b);
		}
		printf("\n");
	}
	//�O���ŏc�ɃJ�E���g�A�b�v�A�����ŉ��ɃJ�E���g�A�b�v���Ă���


	system("pause>0");
	return 0;
}
#endif


//for & if
#ifdef _14_
main() {
	//for & if
	int x;
	//for�ŃJ�E���g�A�b�v
	for (x = 0; x < 13; x++) {
		//if�ŏ����t��
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
	//�]��ŗV��
	int x, y, a;
	for (x = 0; x < 7; x++) {
		for (y = 0; y < 7; y++) {
			a = (x + y) % 4;
			if (a == 0) {
				printf("�Z");
			}
			else if (a == 1) {
				printf("�~");
			}
			else if (a == 2) {
				printf("��");
			}
			else {
				printf("��");
			}
		}
		printf("\n");
	}
	//0�`6�̏c����d���[�v��p�ӂ��A�c�Ɖ��𑫂���4�Ŋ������]��ɉ����ċL����\�����Ă���


	system("pause>0");
	return 0;
}
#endif


//float
#ifdef _16_
main() {
	//����
	int X;
	X = 13;
	printf("%d\n", X);

	//����
	float f;
	f = 3.14;
	printf("%f\n", f);

	//�����ɂȂ鏜�Z
	f = 13;
	printf("%f", f / 17);


	system("pause>0");
	return 0;
}
#endif


//struct
#ifdef _17_
//�J�[�h�Z�b�g
//�Z�b�g�̓��e
struct DATA {
   int BulletSpeed;
   int FireRate;
   int Capacity;
};

//�Z�b�g�̖��O
struct DATA AEK971;
struct DATA ACE23;

main() {
	AEK971.BulletSpeed = 580;
	AEK971.FireRate = 900;
	AEK971.Capacity = 30;
	printf("AEK-971�F�e��%3d�@���[�g%3d�@���e��%3d+1\n", AEK971.BulletSpeed, AEK971.FireRate, AEK971.Capacity);
	ACE23.BulletSpeed = 620;
	ACE23.FireRate = 770;
	ACE23.Capacity = 35;
	printf("ACE-23�F�e��%3d�@���[�g%3d�@���e��%3d+1", ACE23.BulletSpeed, ACE23.FireRate, ACE23.Capacity);


	system("pause>0");
	return 0;
}
#endif


//�z�񂻂�1
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


//�z�񂻂�2
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

	printf("LON�@%d/%d��\nBJS�@%d/%d��\nNY�@%d/%d��", C[0], C[1], C[2]);


	system("pause>0");
	return 0;
}
#endif


//�z�񂻂�3
#ifdef _20_
main() {
	//1�]���ɗp�ӂ���(�d�l��Ō�Ɂg\0�h���������܂�邩��)
	char m[7] = "Arcaea";
	int p;
	for (p = 0; p < 6; p++) {
		printf("%c", m[p]);
	}


	system("pause>0");
	return 0;
}
#endif


//�֐�
#ifdef _22_
//���s�֐�
NextLine() {
	printf("\n");
}

//�g�����֐�
LTrill() {
	printf(" __\n   __\n __\n   __\n __\n   __\n");
}
CTrill() {
	printf("   __\n     __\n   __\n     __\n   __\n     __\n");
}
RTrill() {
	printf("     __\n       __\n     __\n       __\n     __\n       __\n");
}

//�K�i�֐�
RLStairs() {
	printf(" __\n   __\n     __\n       __\n");
}
LRStairs() {
	printf("       __\n     __\n   __\n __\n");
}

//�|�[�Y�֐�
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


//�l���󂯎��֐�
#ifdef _23a_
Finish() {
	_getch();
}
NextLine() {
	printf("\n");
}
//���֐�
Grass() {
	printf("w");
}
//���K�i�֐�
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
//���֐�
Grass() {
	printf("w");
}
//���ނ�֐�
GrassMatrix(int row, int col) {
	for (int y = 0; y < row; y++) {
		Grasses(col);
	}
}


main() {
	//(�c,��)
	GrassMatrix(6, 4);

	Finish();
}
#endif


//�l��Ԃ��֐�
#ifdef _24_
finish() {
	_getch();
}
nextline() {
	printf("\n");

}

//�\���֐�
dispInt(int a) {
	printf("%d", a);
}
dispFloat(float a) {
	printf("%f", a);
}

//���Z�֐�
int addAB(int a, int b) {
	return a + b;
}

//���Z�֐�
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


//25,26�͓���Q��(�ۓ���)


//�|�C���^
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
	//������������O��a��\��
	printf("%d", a);

	//�|�C���^���g����p��a�̃A�h���X���Ђ��Â�
	int* p;
	p = &a;
	//a��0�ɏ�������
	*p = 0;

	nextline();
	//����������ꂽa��\��
	printf("%d", a);

	finish();

}
#endif


//�|�C���^���g���ړI
#ifdef _28a_
//�w�肵���ϐ���0�ɏ���������
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

	//0�ɂ���x�̃A�h���X��()�̒��Ɏw��
	setZeroInt(&x);
	printf("%d", x);


	system("pause>0");
	return 0;
}
#endif


#ifdef _28b_
//�w�肵���ϐ���0�ɏ���������
void setZeroInt(int* p) {
	*p = 0;
}

main() {
	int x;

	scanf_s("%d", &x);
	//0�ɂ���x�̃A�h���X��()�̒��Ɏw��
	setZeroInt(&x);
	printf("%d", x);


	system("pause>0");
	return 0;
}
#endif


//�\���̂ƃ|�C���^
#ifdef _29_
void nextline() {
	printf("\n");

}

//�Z�b�g���e
struct S {
	int x;
	int y;
};
//�Z�b�g��
struct S a;


main() {
	//�\����(�Z�b�g)�̓��e(�ϐ�)���`����ꍇ�́u.�v
	a.x = 11;
	a.y = 13;
	printf("%3d%3d", a.x, a.y);
	nextline();

	struct S* p;
	p = &a;
	//�\����(�Z�b�g)�̓��e(�ϐ�)���|�C���^�ŕς���ꍇ�́u->�v
	p->x = 17;
	p->y = 23;
	//�|�C���^�Œu���������
	printf("%3d%3d", a.x, a.y);


	system("pause>0");
	return 0;
}

#endif


//�z��ƃ|�C���^
#ifdef _30_
main() {
	//�z���a�ɐ�������
	int a[3];
	for (int i = 0; i < 3; i++) {
		a[i] = i + 1;
	}

	//�|�C���^�ŏ���������
	int* p;
	p = a;
	for (int i = 0; i < 3; i++) {
		p[i] = 0;
	}

	//���ɕ\��
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}


	system("pause>0");
	return 0;
}
#endif


#ifdef _30b_
//�|�C���^�ŏ���������ߒ����֐���
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
//a�ɐ�������̂ƃ|�C���^�ł̏���������1�̃��[�v���ɂ܂Ƃ߂�
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


//�\���̔z��ƃ|�C���^
#ifdef _33_
struct V {
	int x;
	int y;
};
//�Z�b�g��z��
struct V a[3];

void setZeroStructArray(struct V* p) {
	for (int i = 0; i < 3; i++) {
		p[i].x = 0;
		p[i].y = 0;
	}
}


int main() {
	//�\���̔z���"x = 32"��"y = 64"���ꂼ��Ƀ��[�v��1�`3��������
	for (int i = 0; i < 3; i++) {
		a[i].x = 32 * (i + 1);
		a[i].y = 64 * (i + 1);
		printf("%d %d\n", a[i].x, a[i].y);
	}
	printf("\n\n");

	//0�ɏ�������
	setZeroStructArray(a);

	//�����������\��
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
	char a[8] = "�Ȋw";
	setString(a, "���w");
	printf("%s", a);

	system("pause>0");
	return 0;
}
#endif
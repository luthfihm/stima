#include <iostream>

#define boolean unsigned char
#define true 1
#define false 0

#define LebihDari -1
#define KurangDari -2
#define NoSign -3

using namespace std;

typedef int matriks[9][9];

void bacainput(matriks *m);

void cetak(matriks m);

boolean cek(int i,int j,int x,matriks m);

int main()
{
	matriks m;
	int i,j;
	bacainput(&m);
	i = 0;
	while (i<9){
		j = 0;
		while (j<9){
			
		}
		i+=2;
	}
	cetak(m);
	return 0;
}

void bacainput(matriks *m)
{
	int i,j;
	for (i=0;i<9;i++){
		for (j=0;j<9;j++){
			cin >> (*m)[i][j];
		}
	}
}

void cetak(matriks m)
{
	int i.j;
	for (i=0;i<9;i++){
		for (j=0;j<9;j++){
			cout << m[i][j];
		}
	}
}

boolean cek(int i,int j,int x,matriks m)
{
	boolean brs,kol,tanda;
	int k;
	tanda = true;
	brs = true;
	kol = true;
	if ((i==0)&&(j==0)){
		if (m[i][j+1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j+2]);
		}else if (m[i][j+1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j+2]);
		}
		if(tanda){
			if (m[i+1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i+2][j]);
			}else if (m[i+1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i+2][j]);
			}
		}
	}else if ((i==0)&&(j==8)){
		if (m[i][j-1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j-2]);
		}else if (m[i][j-1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j-2]);
		}
		if(tanda){
			if (m[i+1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i+2][j]);
			}else if (m[i+1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i+2][j]);
			}
		}
	}else if ((i==8)&&(j==0)){
		if (m[i][j+1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j+2]);
		}else if (m[i][j+1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j+2]);
		}
		if(tanda){
			if (m[i-1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i-2][j]);
			}else if (m[i-1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i-2][j]);
			}
		}
	}else if ((i==8)&&(j==8)){
		if (m[i][j-1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j-2]);
		}else if (m[i][j-1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j-2]);
		}
		if(tanda){
			if (m[i-1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i-2][j]);
			}else if (m[i-1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i-2][j]);
			}
		}
	}else if (i==0){
		if (m[i][j+1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j+2]);
		}else if (m[i][j+1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j+2]);
		}
		if(tanda){
			if (m[i+1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i+2][j]);
			}else if (m[i+1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i+2][j]);
			}
		}
		if (tanda){
			if (m[i][j-1] == LebihDari){
				tanda = tanda && (m[i][j] > m[i][j-2]);
			}else if (m[i][j-1] == KurangDari){
				tanda = tanda && (m[i][j] < m[i][j-2]);
			}
		}
	}else if (i==8){
		if (m[i][j+1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j+2]);
		}else if (m[i][j+1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j+2]);
		}
		if(tanda){
			if (m[i-1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i-2][j]);
			}else if (m[i-1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i-2][j]);
			}
		}
		if (tanda){
			if (m[i][j-1] == LebihDari){
				tanda = tanda && (m[i][j] > m[i][j-2]);
			}else if (m[i][j-1] == KurangDari){
				tanda = tanda && (m[i][j] < m[i][j-2]);
			}
		}
	}else if (j==0){
		if (m[i][j+1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j+2]);
		}else if (m[i][j+1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j+2]);
		}
		if(tanda){
			if (m[i+1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i+2][j]);
			}else if (m[i+1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i+2][j]);
			}
		}
		if(tanda){
			if (m[i-1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i-2][j]);
			}else if (m[i-1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i-2][j]);
			}
		}
	}else if (j==8){
		if (m[i][j-1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j-2]);
		}else if (m[i][j-1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j-2]);
		}
		if (tanda){
			if (m[i][j+1] == LebihDari){
				tanda = tanda && (m[i][j] > m[i][j+2]);
			}else if (m[i][j+1] == KurangDari){
				tanda = tanda && (m[i][j] < m[i][j+2]);
			}
		}
		if(tanda){
			if (m[i+1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i+2][j]);
			}else if (m[i+1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i+2][j]);
			}
		}
		if(tanda){
			if (m[i-1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i-2][j]);
			}else if (m[i-1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i-2][j]);
			}
		}
	}else{
		if (m[i][j-1] == LebihDari){
			tanda = tanda && (m[i][j] > m[i][j-2]);
		}else if (m[i][j-1] == KurangDari){
			tanda = tanda && (m[i][j] < m[i][j-2]);
		}
		if(tanda){
			if (m[i+1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i+2][j]);
			}else if (m[i+1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i+2][j]);
			}
		}
		if(tanda){
			if (m[i-1][j] == LebihDari){
				tanda = tanda && (m[i][j] > m[i-2][j]);
			}else if (m[i-1][j] == KurangDari){
				tanda = tanda && (m[i][j] < m[i-2][j]);
			}
		}
	}
	if (tanda){
		k = 0;
		while((k<9)&&(brs)){
			if (m[i][k]==x){
				brs = false;
			}else{
				k+=2;
			}
		}
		k = 0;
		while((k<9)&&(kol)){
			if (m[k][j]==x){
				kol = false;
			}else{
				k+=2;
			}
		}
		return (brs&&kol);
	}else{
		return false;
	}
}
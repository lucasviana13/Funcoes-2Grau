//Algor�timo de Matem�tica para Fun��es do 2� Grau
//Lucas Silva Viana, 1� Inform�tica

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main () {

    setlocale (LC_ALL, "");
    int i, t, es, es1;
    float a, b, c, x1, x2, xv, yv, d, vx, f, x, y;
    string op, omg;
    do
    {
        cout<< "Bem Vindo"<<endl;
        cout<< "Escolha o que voc� tem de resolver: "<<endl;
        cout<< "1-Tendo a fun��o pronta"<<endl;
        cout<< "2-Tendo que achar a fun��o"<<endl;
        cout<< "Digite: ";
        cin>>es;

        if (es==1)
        {
            cout<< "Digite os valores de a, b e c: "<<endl;
            cout<< "a= ";
            cin>>a;
            cout<< "b= ";
            cin>>b;
            cout<< "c= ";
            cin>>c;

            if (a!=0)
            {
                d=pow(b,2)-4*a*c;


                xv=-b/(2*a);
                yv= -d/(4*a);

                if (d>=0)
                {
                    x1= (-b+sqrt(d))/2*a;
                    x2= (-b-sqrt(d))/2*a;

                    if (b>0 && c>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x+"<<c<<endl;
                    }
                    else if (b>0 && c<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<c<<endl;
                    }
                    else if (b<0 && c>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x+"<<c<<endl;
                    }
                    else if (b<0 && c<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<c<<endl;
                    }
                    else if (b==0)
                    {
                        if (c<0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<c<<endl;
                        }
                        else if (c>0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�+"<<c<<endl;
                        }
                        else if (c==0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                        }
                    }
                    else if (c==0)
                    {
                        if (b<0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<endl;
                        }
                        else if (b>0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<endl;
                        }
                        else if (b==0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                        }
                    }
                    cout<< ""<<endl;
                    cout<< "Suas ra�zes s�o: "<<x1<<" e "<<x2<<endl;
                    cout<< ""<<endl;
                    cout<< "As coordenadas do v�rtice s�o: ("<<xv<<","<<yv<<")";

                }

                else
                {

                    if (b>0 && c>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x+"<<c<<endl;
                    }
                    else if (b>0 && c<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<c<<endl;
                    }
                    else if (b<0 && c>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x+"<<c<<endl;
                    }
                    else if (b<0 && c<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<c<<endl;
                    }
                    else if (b==0)
                    {
                        if (c<0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<c<<endl;
                        }
                        else if (c>0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�+"<<c<<endl;
                        }
                        else if (c==0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                        }
                    }
                    else if (c==0)
                    {
                        if (b<0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<endl;
                        }
                        else if (b>0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<endl;
                        }
                        else if (b==0)
                        {
                            cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                        }
                    }
                    cout<< ""<<endl;
                    cout<< "N�o possui ra�zes reais"<<endl;
                    cout<< ""<<endl;
                    cout<< "As coordenadas do v�rtice s�o: ("<<xv<<","<<yv<<")"<<endl;

                }

                if (a>0)
                {
                    cout<< ""<<endl;
                    cout<< "Essa fun��o � M�nima"<<endl;
                    cout<< ""<<endl;
                }
                else
                {
                    cout<< ""<<endl;
                    cout<< "Essa fun��o � M�xima"<<endl;
                    cout<< ""<<endl;
                }



            }
            }

        else if (es==2)
        {
            cout<< "Qual a informa��o que voc� tem? Lembrando que o c j� tem de se conhecer "<<endl;
            cout<< "1-V�rtice e ponto"<<endl;
            cout<< "2-Ra�zes e ponto"<<endl;
            cout<< "Digite: ";
            cin>>es1;
            if (es1==1)
            {
                cout<< "Digite um ponto dela em modo de x y: ";
                cin>>x>>y;
                cout<< "Digite as coordenadas do v�rtice em xv yv: ";
                cin>>xv>>yv;
                cout<< "D� tamb�m o F de 0: ";
                cin>>c;
                a=y/(pow(x-xv,2)+yv);
                b=(y-a*pow(x,2)-c)/x;
                if (b>0 && c>0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x+"<<c<<endl;
                }
                else if (b>0 && c<0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<c<<endl;
                }
                else if (b<0 && c>0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x+"<<c<<endl;
                }
                else if (b<0 && c<0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<c<<endl;
                }
                else if (b==0)
                {
                    if (c<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<c<<endl;
                    }
                    else if (c>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<c<<endl;
                    }
                    else if (c==0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                    }
                }
                else if (c==0)
                {
                    if (b<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<endl;
                    }
                    else if (b>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<endl;
                    }
                    else if (b==0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                    }
                }
            }
            else if (es1==2)
            {
                cout<< "Digite um ponto dela em modo de x y: ";
                cin>>x>>y;
                cout<< "Digite as ra�zes da fun��o: ";
                cin>>x1>>x2;
                cout<< "D� tamb�m o F de 0: ";
                cin>>c;
                a=y/((x-x1)*(x-x2));
                b=(y-a*pow(x,2)-c)/x;
                if (b>0 && c>0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x+"<<c<<endl;
                }
                else if (b>0 && c<0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<c<<endl;
                }
                else if (b<0 && c>0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x+"<<c<<endl;
                }
                else if (b<0 && c<0)
                {
                    cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<c<<endl;
                }
                else if (b==0)
                {
                    if (c<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<c<<endl;
                    }
                    else if (c>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<c<<endl;
                    }
                    else if (c==0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                    }
                }
                else if (c==0)
                {
                    if (b<0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<b<<"x"<<endl;
                    }
                    else if (b>0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�+"<<b<<"x"<<endl;
                    }
                    else if (b==0)
                    {
                        cout<< "Sua fun��o �: "<<a<<"x�"<<endl;
                    }
                }
            }
        }
        cout<< "Deseja testar? Digite sim ou n�o"<<endl;
        fflush (stdin);
        getline (cin,op);
        if (op=="sim")
        {
            cout<< "Para encerrar digite -123"<<endl;


            do
            {
                cout<< "Agora digite um valor para substituir o x na fun��o: ";
                cin>>vx;
                f=a*pow(vx,2)+b*vx+c;

                cout<<"F("<<vx<<")="<<f<<endl;
                cout<< ""<<endl;


            }
            while(vx!=-123);

        }
        cout<< "Deseja repetir o c�digo? SIM ou N�O: ";
        fflush (stdin);
        getline (cin,omg);
        if (omg!="sim")
        {
            i=1;
        }
        else
        {
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
        }
    }
    while (i!=1);
    system ("pause");
    cout<< ""<<endl;
    cout<< "Fim do c�digo"<<endl;
    return 0;
}

//Algorítimo de Matemática para Funções do 2º Grau
//Lucas Silva Viana, 1º Informática

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
        cout<< "Escolha o que você tem de resolver: "<<endl;
        cout<< "1-Tendo a função pronta"<<endl;
        cout<< "2-Tendo que achar a função"<<endl;
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
                        cout<< "Sua função é: "<<a<<"x²+"<<b<<"x+"<<c<<endl;
                    }
                    else if (b>0 && c<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<c<<endl;
                    }
                    else if (b<0 && c>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<b<<"x+"<<c<<endl;
                    }
                    else if (b<0 && c<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<c<<endl;
                    }
                    else if (b==0)
                    {
                        if (c<0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<c<<endl;
                        }
                        else if (c>0)
                        {
                            cout<< "Sua função é: "<<a<<"x²+"<<c<<endl;
                        }
                        else if (c==0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<endl;
                        }
                    }
                    else if (c==0)
                    {
                        if (b<0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<endl;
                        }
                        else if (b>0)
                        {
                            cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<endl;
                        }
                        else if (b==0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<endl;
                        }
                    }
                    cout<< ""<<endl;
                    cout<< "Suas raízes são: "<<x1<<" e "<<x2<<endl;
                    cout<< ""<<endl;
                    cout<< "As coordenadas do vértice são: ("<<xv<<","<<yv<<")";

                }

                else
                {

                    if (b>0 && c>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<b<<"x+"<<c<<endl;
                    }
                    else if (b>0 && c<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<c<<endl;
                    }
                    else if (b<0 && c>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<b<<"x+"<<c<<endl;
                    }
                    else if (b<0 && c<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<c<<endl;
                    }
                    else if (b==0)
                    {
                        if (c<0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<c<<endl;
                        }
                        else if (c>0)
                        {
                            cout<< "Sua função é: "<<a<<"x²+"<<c<<endl;
                        }
                        else if (c==0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<endl;
                        }
                    }
                    else if (c==0)
                    {
                        if (b<0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<endl;
                        }
                        else if (b>0)
                        {
                            cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<endl;
                        }
                        else if (b==0)
                        {
                            cout<< "Sua função é: "<<a<<"x²"<<endl;
                        }
                    }
                    cout<< ""<<endl;
                    cout<< "Não possui raízes reais"<<endl;
                    cout<< ""<<endl;
                    cout<< "As coordenadas do vértice são: ("<<xv<<","<<yv<<")"<<endl;

                }

                if (a>0)
                {
                    cout<< ""<<endl;
                    cout<< "Essa função é Mínima"<<endl;
                    cout<< ""<<endl;
                }
                else
                {
                    cout<< ""<<endl;
                    cout<< "Essa função é Máxima"<<endl;
                    cout<< ""<<endl;
                }



            }
            }

        else if (es==2)
        {
            cout<< "Qual a informação que você tem? Lembrando que o c já tem de se conhecer "<<endl;
            cout<< "1-Vértice e ponto"<<endl;
            cout<< "2-Raízes e ponto"<<endl;
            cout<< "Digite: ";
            cin>>es1;
            if (es1==1)
            {
                cout<< "Digite um ponto dela em modo de x y: ";
                cin>>x>>y;
                cout<< "Digite as coordenadas do vértice em xv yv: ";
                cin>>xv>>yv;
                cout<< "Dê também o F de 0: ";
                cin>>c;
                a=y/(pow(x-xv,2)+yv);
                b=(y-a*pow(x,2)-c)/x;
                if (b>0 && c>0)
                {
                    cout<< "Sua função é: "<<a<<"x²+"<<b<<"x+"<<c<<endl;
                }
                else if (b>0 && c<0)
                {
                    cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<c<<endl;
                }
                else if (b<0 && c>0)
                {
                    cout<< "Sua função é: "<<a<<"x²"<<b<<"x+"<<c<<endl;
                }
                else if (b<0 && c<0)
                {
                    cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<c<<endl;
                }
                else if (b==0)
                {
                    if (c<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<c<<endl;
                    }
                    else if (c>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<c<<endl;
                    }
                    else if (c==0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<endl;
                    }
                }
                else if (c==0)
                {
                    if (b<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<endl;
                    }
                    else if (b>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<endl;
                    }
                    else if (b==0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<endl;
                    }
                }
            }
            else if (es1==2)
            {
                cout<< "Digite um ponto dela em modo de x y: ";
                cin>>x>>y;
                cout<< "Digite as raízes da função: ";
                cin>>x1>>x2;
                cout<< "Dê também o F de 0: ";
                cin>>c;
                a=y/((x-x1)*(x-x2));
                b=(y-a*pow(x,2)-c)/x;
                if (b>0 && c>0)
                {
                    cout<< "Sua função é: "<<a<<"x²+"<<b<<"x+"<<c<<endl;
                }
                else if (b>0 && c<0)
                {
                    cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<c<<endl;
                }
                else if (b<0 && c>0)
                {
                    cout<< "Sua função é: "<<a<<"x²"<<b<<"x+"<<c<<endl;
                }
                else if (b<0 && c<0)
                {
                    cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<c<<endl;
                }
                else if (b==0)
                {
                    if (c<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<c<<endl;
                    }
                    else if (c>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<c<<endl;
                    }
                    else if (c==0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<endl;
                    }
                }
                else if (c==0)
                {
                    if (b<0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<b<<"x"<<endl;
                    }
                    else if (b>0)
                    {
                        cout<< "Sua função é: "<<a<<"x²+"<<b<<"x"<<endl;
                    }
                    else if (b==0)
                    {
                        cout<< "Sua função é: "<<a<<"x²"<<endl;
                    }
                }
            }
        }
        cout<< "Deseja testar? Digite sim ou não"<<endl;
        fflush (stdin);
        getline (cin,op);
        if (op=="sim")
        {
            cout<< "Para encerrar digite -123"<<endl;


            do
            {
                cout<< "Agora digite um valor para substituir o x na função: ";
                cin>>vx;
                f=a*pow(vx,2)+b*vx+c;

                cout<<"F("<<vx<<")="<<f<<endl;
                cout<< ""<<endl;


            }
            while(vx!=-123);

        }
        cout<< "Deseja repetir o código? SIM ou NÃO: ";
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
    cout<< "Fim do código"<<endl;
    return 0;
}

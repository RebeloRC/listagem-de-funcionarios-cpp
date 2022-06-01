// C++ program to implement
// the above approach
#include <iostream>
using namespace std;

int resposta;
int totalSalarios;

class Funcionario
{
  int id;
  char name[30];
  double salario;

public:
  void getdata();

  void putdata();
};

void Funcionario::getdata()
{
  cout << "Prontuario: ";
  cin >> id;
  cout << "Nome: ";
  cin >> name;
  cout << "Salario: ";
  cin >> salario;

  totalSalarios += salario;
}

void Funcionario::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << salario << " ";
  cout << endl;
}

// Driver code
int main()
{

  while (true)
  {
    cout << "\n0 - Sair\n1- Incuir\n2- Excluir(*)\n3- Pesquisar\n4- Listar";
    cin >> resposta;

    switch (resposta)
    {
    case 0:

      return 0;

    case 1:

      Funcionario fun[30];
      int n, i;
      cout << "Quantos funcionarios pretende cadastrar: ";
      cin >> n;

      for (i = 0; i < n; i++)
        fun[i].getdata();

      break;

    case 2:

      break;

    case 3:
      int pesquisa;

      cout << "Digite o prontuario do funcionario: ";
      cin >> pesquisa;

      // pesquisa
      for (i = 0; i <= pesquisa; i++)
        if (i == pesquisa)
        {
          fun[i].putdata();
        }

      break;

    case 4:

      cout << "Funcionarios:  " << endl;

      for (i = 0; i < n; i++)
      {
        fun[i].putdata();
      }

      cout << "Soma total dos salarios: " << totalSalarios << endl;

      break;

    default:
      break;
    }
  }
}
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int *tr;
bool *empty;


void add(int x); void search(int x); void remove(int x); void min(); void max(); void next(int x);
void previous(int x); void preorder_node(int x); void inorder_node(int x); void postorder_node(int x);

int main() {
  int t, n, x, op;
  char instr;
  cin >> t;
  for(int i = 0; i < t; i++) {
    cin >> n;
    tr = new int [n+1];
    empty = new bool [n+1];
    for(int a = 1; a < n+1; a++)
      empty[a] = true;
    for(int k = 1; k <= n; k++) {
      cin >> instr;
      switch(instr) {
        case 'I':
          cin >> x;
          // add x to tree
          add(x);
          break;
        case 'D':
          cin >> x;
          // remove x from tree
          break;
        case 'S':
          cin >> x;
          // search x in tree
          search(x);
          break;
        case 'X':
          cin >> op;
          switch(op) {
            case 0:
              // find smallest x in tree
              break;
            case 1:
              // find biggest x in tree
              break;
          }
          break;
        case 'N':
          cin >> x;
          // find next x
          break;
        case 'P':
          cin >> x;
          // find previous x
          break;
        case 'R':
          cin >> op;
          switch(op) {
            case 0:
              // show inorder node
              break;
            case 1:
              //  show preorder node
              break;
            case 2:
              // show postorder node
              break;
        }
        break;
        default:
          cout << "-\n";
          break;
      }
    }
    cout << "test " << i << '\n';
    delete [] tr;
    delete [] empty;
  }

  return 0;
}

void add(int x)
{
    if (empty[1]==true)
    {
        tr[1] = x;
        empty[1]=false;
    }
    else
    {
    bool znalazlem_miejsce=false;
    int wezel=1;

    while (znalazlem_miejsce==false)
    {
        if (empty[wezel]==true)
        {
            znalazlem_miejsce=true;
            tr[wezel]=x;
            empty[wezel]=false;

        }
        else if(x<tr[wezel])
        {
            //w lewo
            wezel=2*wezel;
        }
        else
        {
            //w prawo
            wezel=2*wezel+1;
        }
    }
    }

}


void search(int x) {
  bool found = false;
  int node = 1;

  while (found == false) {
    if(x == tr[node]) {
      found = true;
      cout << x << ' ';
    } else if(x < tr[node]) {
      node = 2 * node;
      cout << tr[node-1] << ' ';
    } else {
      node = 2 * node + 1;
      cout << tr[node-1] << ' ';
    }
  }
  cout << '\n';
}

void remove(int x) {

}

void next(int x) {

}

void previous(int x) {

}

void min() {

}

void max() {

}

void inorder_node() {

}

void preorder_node() {

}

void postorder_node() {

}

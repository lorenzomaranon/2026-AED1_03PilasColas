//- Usos del const
//   
//- Por que en un TAD no tengo que poner un constructor Virtual, pero sí un destructor Virtual
//- Constructores de Copia
        ListaConUltimo(const ListaConUltimo& otra);


// Por que se pone = delete                                 (01_pila_tad.cpp)
PilaEnlazada(const PilaEnlazada&) = delete;             // regla de los tres:
PilaEnlazada& operator=(const PilaEnlazada&) = delete;

// Método ListaDoble::insertarAntesDe()
// Luego al usarla,¿que es lo que yo le paso en el primer argumento? Un int con la posicion? Un nodo?
//                                 |
//                                \/ esto no deberia ser un int???
void ListaDoble::insertarAntesDe(Nodo* pos, int valor) {
    Nodo* nuevo = new Nodo{valor, pos, pos->anterior};
    pos->anterior->siguiente = nuevo;
    pos->anterior = nuevo;
    n_++;
}
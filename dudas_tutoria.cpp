//- Usos del const
//   
//- Por que en un TAD no tengo que poner un constructor Virtual, pero sí un destructor Virtual
//- Constructores de Copia
        ListaConUltimo(const ListaConUltimo& otra);


// Por que se pone = delete                                 (01_pila_tad.cpp)
PilaEnlazada(const PilaEnlazada&) = delete;             // regla de los tres:
PilaEnlazada& operator=(const PilaEnlazada&) = delete;


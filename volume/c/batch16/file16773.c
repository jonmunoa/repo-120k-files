// fichero 16773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16773;

Registro16773 crear_registro16773(int id) {
    Registro16773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16773(Registro16773 r) {
    return r.valor + r.id;
}

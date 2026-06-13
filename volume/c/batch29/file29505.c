// fichero 29505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29505;

Registro29505 crear_registro29505(int id) {
    Registro29505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29505(Registro29505 r) {
    return r.valor + r.id;
}

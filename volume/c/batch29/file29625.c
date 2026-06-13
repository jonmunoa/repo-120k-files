// fichero 29625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29625;

Registro29625 crear_registro29625(int id) {
    Registro29625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29625(Registro29625 r) {
    return r.valor + r.id;
}

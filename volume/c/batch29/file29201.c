// fichero 29201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29201;

Registro29201 crear_registro29201(int id) {
    Registro29201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29201(Registro29201 r) {
    return r.valor + r.id;
}

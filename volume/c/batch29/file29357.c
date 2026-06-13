// fichero 29357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29357;

Registro29357 crear_registro29357(int id) {
    Registro29357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29357(Registro29357 r) {
    return r.valor + r.id;
}

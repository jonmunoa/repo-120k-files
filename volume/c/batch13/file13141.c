// fichero 13141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13141;

Registro13141 crear_registro13141(int id) {
    Registro13141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13141(Registro13141 r) {
    return r.valor + r.id;
}

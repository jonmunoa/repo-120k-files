// fichero 13 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13;

Registro13 crear_registro13(int id) {
    Registro13 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13(Registro13 r) {
    return r.valor + r.id;
}

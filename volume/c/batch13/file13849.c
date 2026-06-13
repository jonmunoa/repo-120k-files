// fichero 13849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13849;

Registro13849 crear_registro13849(int id) {
    Registro13849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13849(Registro13849 r) {
    return r.valor + r.id;
}

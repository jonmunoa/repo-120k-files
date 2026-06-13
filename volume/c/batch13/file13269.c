// fichero 13269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13269;

Registro13269 crear_registro13269(int id) {
    Registro13269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13269(Registro13269 r) {
    return r.valor + r.id;
}

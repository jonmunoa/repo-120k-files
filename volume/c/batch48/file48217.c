// fichero 48217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48217;

Registro48217 crear_registro48217(int id) {
    Registro48217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48217(Registro48217 r) {
    return r.valor + r.id;
}

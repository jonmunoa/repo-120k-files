// fichero 48597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48597;

Registro48597 crear_registro48597(int id) {
    Registro48597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48597(Registro48597 r) {
    return r.valor + r.id;
}

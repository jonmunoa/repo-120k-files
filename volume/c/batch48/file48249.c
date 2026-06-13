// fichero 48249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48249;

Registro48249 crear_registro48249(int id) {
    Registro48249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48249(Registro48249 r) {
    return r.valor + r.id;
}

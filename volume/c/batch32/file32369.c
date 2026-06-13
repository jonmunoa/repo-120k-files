// fichero 32369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32369;

Registro32369 crear_registro32369(int id) {
    Registro32369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32369(Registro32369 r) {
    return r.valor + r.id;
}

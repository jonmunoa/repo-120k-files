// fichero 2329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2329;

Registro2329 crear_registro2329(int id) {
    Registro2329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2329(Registro2329 r) {
    return r.valor + r.id;
}

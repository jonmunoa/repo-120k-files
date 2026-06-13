// fichero 42349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42349;

Registro42349 crear_registro42349(int id) {
    Registro42349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42349(Registro42349 r) {
    return r.valor + r.id;
}

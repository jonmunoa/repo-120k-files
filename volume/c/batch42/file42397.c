// fichero 42397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42397;

Registro42397 crear_registro42397(int id) {
    Registro42397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42397(Registro42397 r) {
    return r.valor + r.id;
}

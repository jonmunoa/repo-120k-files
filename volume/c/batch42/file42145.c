// fichero 42145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42145;

Registro42145 crear_registro42145(int id) {
    Registro42145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42145(Registro42145 r) {
    return r.valor + r.id;
}

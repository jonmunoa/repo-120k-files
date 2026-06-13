// fichero 42273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42273;

Registro42273 crear_registro42273(int id) {
    Registro42273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42273(Registro42273 r) {
    return r.valor + r.id;
}

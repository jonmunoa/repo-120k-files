// fichero 42285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42285;

Registro42285 crear_registro42285(int id) {
    Registro42285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42285(Registro42285 r) {
    return r.valor + r.id;
}

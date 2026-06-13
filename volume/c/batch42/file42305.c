// fichero 42305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42305;

Registro42305 crear_registro42305(int id) {
    Registro42305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42305(Registro42305 r) {
    return r.valor + r.id;
}

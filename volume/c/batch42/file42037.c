// fichero 42037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42037;

Registro42037 crear_registro42037(int id) {
    Registro42037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42037(Registro42037 r) {
    return r.valor + r.id;
}

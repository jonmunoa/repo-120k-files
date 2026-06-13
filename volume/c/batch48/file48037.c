// fichero 48037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48037;

Registro48037 crear_registro48037(int id) {
    Registro48037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48037(Registro48037 r) {
    return r.valor + r.id;
}

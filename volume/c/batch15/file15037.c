// fichero 15037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15037;

Registro15037 crear_registro15037(int id) {
    Registro15037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15037(Registro15037 r) {
    return r.valor + r.id;
}

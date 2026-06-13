// fichero 24037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24037;

Registro24037 crear_registro24037(int id) {
    Registro24037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24037(Registro24037 r) {
    return r.valor + r.id;
}

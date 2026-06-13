// fichero 37113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37113;

Registro37113 crear_registro37113(int id) {
    Registro37113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37113(Registro37113 r) {
    return r.valor + r.id;
}

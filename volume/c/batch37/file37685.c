// fichero 37685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37685;

Registro37685 crear_registro37685(int id) {
    Registro37685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37685(Registro37685 r) {
    return r.valor + r.id;
}

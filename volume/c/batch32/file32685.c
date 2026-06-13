// fichero 32685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32685;

Registro32685 crear_registro32685(int id) {
    Registro32685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32685(Registro32685 r) {
    return r.valor + r.id;
}

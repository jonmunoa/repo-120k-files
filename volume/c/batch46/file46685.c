// fichero 46685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46685;

Registro46685 crear_registro46685(int id) {
    Registro46685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46685(Registro46685 r) {
    return r.valor + r.id;
}

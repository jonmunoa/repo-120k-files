// fichero 45685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45685;

Registro45685 crear_registro45685(int id) {
    Registro45685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45685(Registro45685 r) {
    return r.valor + r.id;
}

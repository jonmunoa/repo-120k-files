// fichero 54025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54025;

Registro54025 crear_registro54025(int id) {
    Registro54025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54025(Registro54025 r) {
    return r.valor + r.id;
}

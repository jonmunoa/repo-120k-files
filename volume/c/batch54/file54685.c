// fichero 54685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54685;

Registro54685 crear_registro54685(int id) {
    Registro54685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54685(Registro54685 r) {
    return r.valor + r.id;
}

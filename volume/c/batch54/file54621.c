// fichero 54621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54621;

Registro54621 crear_registro54621(int id) {
    Registro54621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54621(Registro54621 r) {
    return r.valor + r.id;
}

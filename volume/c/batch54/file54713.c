// fichero 54713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54713;

Registro54713 crear_registro54713(int id) {
    Registro54713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54713(Registro54713 r) {
    return r.valor + r.id;
}

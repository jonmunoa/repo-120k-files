// fichero 54373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54373;

Registro54373 crear_registro54373(int id) {
    Registro54373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54373(Registro54373 r) {
    return r.valor + r.id;
}

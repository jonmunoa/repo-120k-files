// fichero 54037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54037;

Registro54037 crear_registro54037(int id) {
    Registro54037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54037(Registro54037 r) {
    return r.valor + r.id;
}

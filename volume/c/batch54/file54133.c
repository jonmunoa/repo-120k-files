// fichero 54133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54133;

Registro54133 crear_registro54133(int id) {
    Registro54133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54133(Registro54133 r) {
    return r.valor + r.id;
}

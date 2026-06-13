// fichero 54609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54609;

Registro54609 crear_registro54609(int id) {
    Registro54609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54609(Registro54609 r) {
    return r.valor + r.id;
}

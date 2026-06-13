// fichero 54641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54641;

Registro54641 crear_registro54641(int id) {
    Registro54641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54641(Registro54641 r) {
    return r.valor + r.id;
}

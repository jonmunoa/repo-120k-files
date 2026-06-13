// fichero 54469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54469;

Registro54469 crear_registro54469(int id) {
    Registro54469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54469(Registro54469 r) {
    return r.valor + r.id;
}

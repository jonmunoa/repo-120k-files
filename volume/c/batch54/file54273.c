// fichero 54273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54273;

Registro54273 crear_registro54273(int id) {
    Registro54273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54273(Registro54273 r) {
    return r.valor + r.id;
}

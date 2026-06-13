// fichero 54377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54377;

Registro54377 crear_registro54377(int id) {
    Registro54377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54377(Registro54377 r) {
    return r.valor + r.id;
}

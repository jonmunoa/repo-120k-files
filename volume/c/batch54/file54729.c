// fichero 54729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54729;

Registro54729 crear_registro54729(int id) {
    Registro54729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54729(Registro54729 r) {
    return r.valor + r.id;
}

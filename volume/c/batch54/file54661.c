// fichero 54661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54661;

Registro54661 crear_registro54661(int id) {
    Registro54661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54661(Registro54661 r) {
    return r.valor + r.id;
}

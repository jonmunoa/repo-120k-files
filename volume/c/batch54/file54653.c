// fichero 54653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54653;

Registro54653 crear_registro54653(int id) {
    Registro54653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54653(Registro54653 r) {
    return r.valor + r.id;
}

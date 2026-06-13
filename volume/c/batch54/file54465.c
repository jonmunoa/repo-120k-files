// fichero 54465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54465;

Registro54465 crear_registro54465(int id) {
    Registro54465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54465(Registro54465 r) {
    return r.valor + r.id;
}

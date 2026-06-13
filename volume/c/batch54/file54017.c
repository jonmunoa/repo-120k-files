// fichero 54017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54017;

Registro54017 crear_registro54017(int id) {
    Registro54017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54017(Registro54017 r) {
    return r.valor + r.id;
}

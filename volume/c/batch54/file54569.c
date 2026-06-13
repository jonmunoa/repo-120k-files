// fichero 54569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54569;

Registro54569 crear_registro54569(int id) {
    Registro54569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54569(Registro54569 r) {
    return r.valor + r.id;
}

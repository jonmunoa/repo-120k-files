// fichero 54057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54057;

Registro54057 crear_registro54057(int id) {
    Registro54057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54057(Registro54057 r) {
    return r.valor + r.id;
}

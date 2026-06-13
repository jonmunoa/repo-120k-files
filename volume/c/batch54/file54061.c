// fichero 54061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54061;

Registro54061 crear_registro54061(int id) {
    Registro54061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54061(Registro54061 r) {
    return r.valor + r.id;
}

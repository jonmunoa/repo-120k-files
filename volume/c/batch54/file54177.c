// fichero 54177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54177;

Registro54177 crear_registro54177(int id) {
    Registro54177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54177(Registro54177 r) {
    return r.valor + r.id;
}

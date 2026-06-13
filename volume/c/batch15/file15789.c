// fichero 15789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15789;

Registro15789 crear_registro15789(int id) {
    Registro15789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15789(Registro15789 r) {
    return r.valor + r.id;
}

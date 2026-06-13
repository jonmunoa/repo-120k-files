// fichero 14857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14857;

Registro14857 crear_registro14857(int id) {
    Registro14857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14857(Registro14857 r) {
    return r.valor + r.id;
}

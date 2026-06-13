// fichero 43905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43905;

Registro43905 crear_registro43905(int id) {
    Registro43905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43905(Registro43905 r) {
    return r.valor + r.id;
}

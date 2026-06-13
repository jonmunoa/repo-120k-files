// fichero 54013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54013;

Registro54013 crear_registro54013(int id) {
    Registro54013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54013(Registro54013 r) {
    return r.valor + r.id;
}

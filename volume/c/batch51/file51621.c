// fichero 51621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51621;

Registro51621 crear_registro51621(int id) {
    Registro51621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51621(Registro51621 r) {
    return r.valor + r.id;
}

// fichero 21061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21061;

Registro21061 crear_registro21061(int id) {
    Registro21061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21061(Registro21061 r) {
    return r.valor + r.id;
}

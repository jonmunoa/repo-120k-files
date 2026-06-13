// fichero 43497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43497;

Registro43497 crear_registro43497(int id) {
    Registro43497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43497(Registro43497 r) {
    return r.valor + r.id;
}

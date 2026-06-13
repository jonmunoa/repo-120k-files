// fichero 33557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33557;

Registro33557 crear_registro33557(int id) {
    Registro33557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33557(Registro33557 r) {
    return r.valor + r.id;
}

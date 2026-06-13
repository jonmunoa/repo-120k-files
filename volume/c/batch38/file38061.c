// fichero 38061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38061;

Registro38061 crear_registro38061(int id) {
    Registro38061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38061(Registro38061 r) {
    return r.valor + r.id;
}

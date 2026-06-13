// fichero 43177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43177;

Registro43177 crear_registro43177(int id) {
    Registro43177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43177(Registro43177 r) {
    return r.valor + r.id;
}

// fichero 43241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43241;

Registro43241 crear_registro43241(int id) {
    Registro43241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43241(Registro43241 r) {
    return r.valor + r.id;
}

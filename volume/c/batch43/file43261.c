// fichero 43261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43261;

Registro43261 crear_registro43261(int id) {
    Registro43261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43261(Registro43261 r) {
    return r.valor + r.id;
}

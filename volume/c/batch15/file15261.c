// fichero 15261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15261;

Registro15261 crear_registro15261(int id) {
    Registro15261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15261(Registro15261 r) {
    return r.valor + r.id;
}

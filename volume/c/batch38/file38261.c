// fichero 38261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38261;

Registro38261 crear_registro38261(int id) {
    Registro38261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38261(Registro38261 r) {
    return r.valor + r.id;
}

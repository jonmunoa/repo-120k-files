// fichero 21261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21261;

Registro21261 crear_registro21261(int id) {
    Registro21261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21261(Registro21261 r) {
    return r.valor + r.id;
}

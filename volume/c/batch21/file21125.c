// fichero 21125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21125;

Registro21125 crear_registro21125(int id) {
    Registro21125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21125(Registro21125 r) {
    return r.valor + r.id;
}

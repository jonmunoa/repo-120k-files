// fichero 21253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21253;

Registro21253 crear_registro21253(int id) {
    Registro21253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21253(Registro21253 r) {
    return r.valor + r.id;
}

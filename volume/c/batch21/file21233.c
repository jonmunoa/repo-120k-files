// fichero 21233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21233;

Registro21233 crear_registro21233(int id) {
    Registro21233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21233(Registro21233 r) {
    return r.valor + r.id;
}

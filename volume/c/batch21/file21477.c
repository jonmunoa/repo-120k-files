// fichero 21477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21477;

Registro21477 crear_registro21477(int id) {
    Registro21477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21477(Registro21477 r) {
    return r.valor + r.id;
}

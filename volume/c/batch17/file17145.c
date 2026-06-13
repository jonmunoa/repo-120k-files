// fichero 17145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17145;

Registro17145 crear_registro17145(int id) {
    Registro17145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17145(Registro17145 r) {
    return r.valor + r.id;
}

// fichero 33797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33797;

Registro33797 crear_registro33797(int id) {
    Registro33797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33797(Registro33797 r) {
    return r.valor + r.id;
}

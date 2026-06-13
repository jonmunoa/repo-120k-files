// fichero 48717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48717;

Registro48717 crear_registro48717(int id) {
    Registro48717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48717(Registro48717 r) {
    return r.valor + r.id;
}

// fichero 46617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46617;

Registro46617 crear_registro46617(int id) {
    Registro46617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46617(Registro46617 r) {
    return r.valor + r.id;
}

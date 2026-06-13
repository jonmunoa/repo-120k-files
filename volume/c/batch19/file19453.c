// fichero 19453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19453;

Registro19453 crear_registro19453(int id) {
    Registro19453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19453(Registro19453 r) {
    return r.valor + r.id;
}

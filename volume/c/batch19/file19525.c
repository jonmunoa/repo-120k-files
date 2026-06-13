// fichero 19525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19525;

Registro19525 crear_registro19525(int id) {
    Registro19525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19525(Registro19525 r) {
    return r.valor + r.id;
}

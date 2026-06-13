// fichero 19373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19373;

Registro19373 crear_registro19373(int id) {
    Registro19373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19373(Registro19373 r) {
    return r.valor + r.id;
}

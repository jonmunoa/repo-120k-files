// fichero 46349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46349;

Registro46349 crear_registro46349(int id) {
    Registro46349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46349(Registro46349 r) {
    return r.valor + r.id;
}

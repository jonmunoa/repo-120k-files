// fichero 46105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46105;

Registro46105 crear_registro46105(int id) {
    Registro46105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46105(Registro46105 r) {
    return r.valor + r.id;
}

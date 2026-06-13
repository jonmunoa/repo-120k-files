// fichero 4033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4033;

Registro4033 crear_registro4033(int id) {
    Registro4033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4033(Registro4033 r) {
    return r.valor + r.id;
}

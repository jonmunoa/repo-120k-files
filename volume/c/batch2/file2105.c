// fichero 2105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2105;

Registro2105 crear_registro2105(int id) {
    Registro2105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2105(Registro2105 r) {
    return r.valor + r.id;
}

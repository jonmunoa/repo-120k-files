// fichero 21349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21349;

Registro21349 crear_registro21349(int id) {
    Registro21349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21349(Registro21349 r) {
    return r.valor + r.id;
}

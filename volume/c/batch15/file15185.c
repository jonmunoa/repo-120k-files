// fichero 15185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15185;

Registro15185 crear_registro15185(int id) {
    Registro15185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15185(Registro15185 r) {
    return r.valor + r.id;
}

// fichero 15525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15525;

Registro15525 crear_registro15525(int id) {
    Registro15525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15525(Registro15525 r) {
    return r.valor + r.id;
}

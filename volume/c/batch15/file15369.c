// fichero 15369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15369;

Registro15369 crear_registro15369(int id) {
    Registro15369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15369(Registro15369 r) {
    return r.valor + r.id;
}

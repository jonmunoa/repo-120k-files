// fichero 15565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15565;

Registro15565 crear_registro15565(int id) {
    Registro15565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15565(Registro15565 r) {
    return r.valor + r.id;
}

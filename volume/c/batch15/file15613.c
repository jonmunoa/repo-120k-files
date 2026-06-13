// fichero 15613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15613;

Registro15613 crear_registro15613(int id) {
    Registro15613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15613(Registro15613 r) {
    return r.valor + r.id;
}

// fichero 15825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15825;

Registro15825 crear_registro15825(int id) {
    Registro15825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15825(Registro15825 r) {
    return r.valor + r.id;
}

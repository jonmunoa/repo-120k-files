// fichero 34825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34825;

Registro34825 crear_registro34825(int id) {
    Registro34825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34825(Registro34825 r) {
    return r.valor + r.id;
}

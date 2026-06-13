// fichero 34937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34937;

Registro34937 crear_registro34937(int id) {
    Registro34937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34937(Registro34937 r) {
    return r.valor + r.id;
}

// fichero 4245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4245;

Registro4245 crear_registro4245(int id) {
    Registro4245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4245(Registro4245 r) {
    return r.valor + r.id;
}

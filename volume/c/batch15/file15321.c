// fichero 15321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15321;

Registro15321 crear_registro15321(int id) {
    Registro15321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15321(Registro15321 r) {
    return r.valor + r.id;
}

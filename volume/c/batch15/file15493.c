// fichero 15493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15493;

Registro15493 crear_registro15493(int id) {
    Registro15493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15493(Registro15493 r) {
    return r.valor + r.id;
}

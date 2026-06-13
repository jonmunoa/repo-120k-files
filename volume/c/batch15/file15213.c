// fichero 15213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15213;

Registro15213 crear_registro15213(int id) {
    Registro15213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15213(Registro15213 r) {
    return r.valor + r.id;
}

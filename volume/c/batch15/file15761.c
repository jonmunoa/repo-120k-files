// fichero 15761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15761;

Registro15761 crear_registro15761(int id) {
    Registro15761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15761(Registro15761 r) {
    return r.valor + r.id;
}

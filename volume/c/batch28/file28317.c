// fichero 28317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28317;

Registro28317 crear_registro28317(int id) {
    Registro28317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28317(Registro28317 r) {
    return r.valor + r.id;
}

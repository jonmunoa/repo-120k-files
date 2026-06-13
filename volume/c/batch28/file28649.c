// fichero 28649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28649;

Registro28649 crear_registro28649(int id) {
    Registro28649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28649(Registro28649 r) {
    return r.valor + r.id;
}

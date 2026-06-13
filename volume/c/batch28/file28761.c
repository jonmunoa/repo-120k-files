// fichero 28761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28761;

Registro28761 crear_registro28761(int id) {
    Registro28761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28761(Registro28761 r) {
    return r.valor + r.id;
}

// fichero 761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro761;

Registro761 crear_registro761(int id) {
    Registro761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro761(Registro761 r) {
    return r.valor + r.id;
}

// fichero 24761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24761;

Registro24761 crear_registro24761(int id) {
    Registro24761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24761(Registro24761 r) {
    return r.valor + r.id;
}

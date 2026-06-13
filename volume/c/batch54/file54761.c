// fichero 54761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54761;

Registro54761 crear_registro54761(int id) {
    Registro54761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54761(Registro54761 r) {
    return r.valor + r.id;
}

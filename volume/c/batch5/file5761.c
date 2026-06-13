// fichero 5761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5761;

Registro5761 crear_registro5761(int id) {
    Registro5761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5761(Registro5761 r) {
    return r.valor + r.id;
}

// fichero 5649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5649;

Registro5649 crear_registro5649(int id) {
    Registro5649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5649(Registro5649 r) {
    return r.valor + r.id;
}

// fichero 4649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4649;

Registro4649 crear_registro4649(int id) {
    Registro4649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4649(Registro4649 r) {
    return r.valor + r.id;
}

// fichero 18649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18649;

Registro18649 crear_registro18649(int id) {
    Registro18649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18649(Registro18649 r) {
    return r.valor + r.id;
}

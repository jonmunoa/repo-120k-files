// fichero 18453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18453;

Registro18453 crear_registro18453(int id) {
    Registro18453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18453(Registro18453 r) {
    return r.valor + r.id;
}

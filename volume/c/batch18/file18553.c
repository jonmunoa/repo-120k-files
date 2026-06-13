// fichero 18553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18553;

Registro18553 crear_registro18553(int id) {
    Registro18553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18553(Registro18553 r) {
    return r.valor + r.id;
}

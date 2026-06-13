// fichero 18561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18561;

Registro18561 crear_registro18561(int id) {
    Registro18561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18561(Registro18561 r) {
    return r.valor + r.id;
}

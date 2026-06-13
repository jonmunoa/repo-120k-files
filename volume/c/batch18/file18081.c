// fichero 18081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18081;

Registro18081 crear_registro18081(int id) {
    Registro18081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18081(Registro18081 r) {
    return r.valor + r.id;
}

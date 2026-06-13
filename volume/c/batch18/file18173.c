// fichero 18173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18173;

Registro18173 crear_registro18173(int id) {
    Registro18173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18173(Registro18173 r) {
    return r.valor + r.id;
}

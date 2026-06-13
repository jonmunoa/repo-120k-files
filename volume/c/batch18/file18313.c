// fichero 18313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18313;

Registro18313 crear_registro18313(int id) {
    Registro18313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18313(Registro18313 r) {
    return r.valor + r.id;
}

// fichero 4313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4313;

Registro4313 crear_registro4313(int id) {
    Registro4313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4313(Registro4313 r) {
    return r.valor + r.id;
}

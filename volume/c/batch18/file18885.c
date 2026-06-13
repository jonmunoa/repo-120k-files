// fichero 18885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18885;

Registro18885 crear_registro18885(int id) {
    Registro18885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18885(Registro18885 r) {
    return r.valor + r.id;
}

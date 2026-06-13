// fichero 18421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18421;

Registro18421 crear_registro18421(int id) {
    Registro18421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18421(Registro18421 r) {
    return r.valor + r.id;
}

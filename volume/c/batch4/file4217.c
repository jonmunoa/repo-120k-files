// fichero 4217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4217;

Registro4217 crear_registro4217(int id) {
    Registro4217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4217(Registro4217 r) {
    return r.valor + r.id;
}

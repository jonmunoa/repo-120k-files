// fichero 4233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4233;

Registro4233 crear_registro4233(int id) {
    Registro4233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4233(Registro4233 r) {
    return r.valor + r.id;
}

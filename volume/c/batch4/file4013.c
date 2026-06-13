// fichero 4013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4013;

Registro4013 crear_registro4013(int id) {
    Registro4013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4013(Registro4013 r) {
    return r.valor + r.id;
}

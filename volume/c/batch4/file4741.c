// fichero 4741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4741;

Registro4741 crear_registro4741(int id) {
    Registro4741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4741(Registro4741 r) {
    return r.valor + r.id;
}

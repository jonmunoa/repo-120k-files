// fichero 8481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8481;

Registro8481 crear_registro8481(int id) {
    Registro8481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8481(Registro8481 r) {
    return r.valor + r.id;
}

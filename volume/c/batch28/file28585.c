// fichero 28585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28585;

Registro28585 crear_registro28585(int id) {
    Registro28585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28585(Registro28585 r) {
    return r.valor + r.id;
}

// fichero 28365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28365;

Registro28365 crear_registro28365(int id) {
    Registro28365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28365(Registro28365 r) {
    return r.valor + r.id;
}

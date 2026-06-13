// fichero 28077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28077;

Registro28077 crear_registro28077(int id) {
    Registro28077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28077(Registro28077 r) {
    return r.valor + r.id;
}

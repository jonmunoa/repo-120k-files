// fichero 28493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28493;

Registro28493 crear_registro28493(int id) {
    Registro28493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28493(Registro28493 r) {
    return r.valor + r.id;
}

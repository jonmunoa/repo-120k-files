// fichero 28389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28389;

Registro28389 crear_registro28389(int id) {
    Registro28389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28389(Registro28389 r) {
    return r.valor + r.id;
}

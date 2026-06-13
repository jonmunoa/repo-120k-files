// fichero 17389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17389;

Registro17389 crear_registro17389(int id) {
    Registro17389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17389(Registro17389 r) {
    return r.valor + r.id;
}

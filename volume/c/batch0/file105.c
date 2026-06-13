// fichero 105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro105;

Registro105 crear_registro105(int id) {
    Registro105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro105(Registro105 r) {
    return r.valor + r.id;
}

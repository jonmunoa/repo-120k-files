// fichero 36625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36625;

Registro36625 crear_registro36625(int id) {
    Registro36625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36625(Registro36625 r) {
    return r.valor + r.id;
}

// fichero 17605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17605;

Registro17605 crear_registro17605(int id) {
    Registro17605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17605(Registro17605 r) {
    return r.valor + r.id;
}

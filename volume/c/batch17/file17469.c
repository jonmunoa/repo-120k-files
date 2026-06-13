// fichero 17469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17469;

Registro17469 crear_registro17469(int id) {
    Registro17469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17469(Registro17469 r) {
    return r.valor + r.id;
}

// fichero 17473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17473;

Registro17473 crear_registro17473(int id) {
    Registro17473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17473(Registro17473 r) {
    return r.valor + r.id;
}

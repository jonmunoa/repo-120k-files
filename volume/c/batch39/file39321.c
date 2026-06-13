// fichero 39321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39321;

Registro39321 crear_registro39321(int id) {
    Registro39321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39321(Registro39321 r) {
    return r.valor + r.id;
}

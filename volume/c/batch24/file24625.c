// fichero 24625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24625;

Registro24625 crear_registro24625(int id) {
    Registro24625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24625(Registro24625 r) {
    return r.valor + r.id;
}

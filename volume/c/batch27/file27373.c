// fichero 27373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27373;

Registro27373 crear_registro27373(int id) {
    Registro27373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27373(Registro27373 r) {
    return r.valor + r.id;
}

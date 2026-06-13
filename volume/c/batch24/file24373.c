// fichero 24373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24373;

Registro24373 crear_registro24373(int id) {
    Registro24373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24373(Registro24373 r) {
    return r.valor + r.id;
}

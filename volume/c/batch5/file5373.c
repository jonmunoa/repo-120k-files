// fichero 5373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5373;

Registro5373 crear_registro5373(int id) {
    Registro5373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5373(Registro5373 r) {
    return r.valor + r.id;
}

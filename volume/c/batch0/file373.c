// fichero 373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro373;

Registro373 crear_registro373(int id) {
    Registro373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro373(Registro373 r) {
    return r.valor + r.id;
}

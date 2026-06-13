// fichero 30345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30345;

Registro30345 crear_registro30345(int id) {
    Registro30345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30345(Registro30345 r) {
    return r.valor + r.id;
}

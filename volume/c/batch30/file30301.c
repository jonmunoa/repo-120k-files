// fichero 30301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30301;

Registro30301 crear_registro30301(int id) {
    Registro30301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30301(Registro30301 r) {
    return r.valor + r.id;
}

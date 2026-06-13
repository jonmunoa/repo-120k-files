// fichero 49421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49421;

Registro49421 crear_registro49421(int id) {
    Registro49421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49421(Registro49421 r) {
    return r.valor + r.id;
}

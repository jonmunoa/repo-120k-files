// fichero 30541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30541;

Registro30541 crear_registro30541(int id) {
    Registro30541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30541(Registro30541 r) {
    return r.valor + r.id;
}

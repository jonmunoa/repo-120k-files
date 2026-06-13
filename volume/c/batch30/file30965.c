// fichero 30965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30965;

Registro30965 crear_registro30965(int id) {
    Registro30965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30965(Registro30965 r) {
    return r.valor + r.id;
}

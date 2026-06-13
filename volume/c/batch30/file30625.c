// fichero 30625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30625;

Registro30625 crear_registro30625(int id) {
    Registro30625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30625(Registro30625 r) {
    return r.valor + r.id;
}

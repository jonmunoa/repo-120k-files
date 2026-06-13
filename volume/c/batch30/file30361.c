// fichero 30361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30361;

Registro30361 crear_registro30361(int id) {
    Registro30361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30361(Registro30361 r) {
    return r.valor + r.id;
}

// fichero 30601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30601;

Registro30601 crear_registro30601(int id) {
    Registro30601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30601(Registro30601 r) {
    return r.valor + r.id;
}

// fichero 14237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14237;

Registro14237 crear_registro14237(int id) {
    Registro14237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14237(Registro14237 r) {
    return r.valor + r.id;
}

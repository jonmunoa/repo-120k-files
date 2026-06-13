// fichero 38413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38413;

Registro38413 crear_registro38413(int id) {
    Registro38413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38413(Registro38413 r) {
    return r.valor + r.id;
}

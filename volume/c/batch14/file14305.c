// fichero 14305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14305;

Registro14305 crear_registro14305(int id) {
    Registro14305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14305(Registro14305 r) {
    return r.valor + r.id;
}

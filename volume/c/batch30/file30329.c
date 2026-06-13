// fichero 30329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30329;

Registro30329 crear_registro30329(int id) {
    Registro30329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30329(Registro30329 r) {
    return r.valor + r.id;
}

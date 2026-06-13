// fichero 32177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32177;

Registro32177 crear_registro32177(int id) {
    Registro32177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32177(Registro32177 r) {
    return r.valor + r.id;
}

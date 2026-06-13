// fichero 33941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33941;

Registro33941 crear_registro33941(int id) {
    Registro33941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33941(Registro33941 r) {
    return r.valor + r.id;
}

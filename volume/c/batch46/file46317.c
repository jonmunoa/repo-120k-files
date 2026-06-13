// fichero 46317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46317;

Registro46317 crear_registro46317(int id) {
    Registro46317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46317(Registro46317 r) {
    return r.valor + r.id;
}

// fichero 49537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49537;

Registro49537 crear_registro49537(int id) {
    Registro49537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49537(Registro49537 r) {
    return r.valor + r.id;
}

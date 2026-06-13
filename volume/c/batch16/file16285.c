// fichero 16285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16285;

Registro16285 crear_registro16285(int id) {
    Registro16285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16285(Registro16285 r) {
    return r.valor + r.id;
}

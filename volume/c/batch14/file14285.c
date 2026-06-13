// fichero 14285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14285;

Registro14285 crear_registro14285(int id) {
    Registro14285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14285(Registro14285 r) {
    return r.valor + r.id;
}

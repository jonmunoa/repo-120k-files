// fichero 16629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16629;

Registro16629 crear_registro16629(int id) {
    Registro16629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16629(Registro16629 r) {
    return r.valor + r.id;
}

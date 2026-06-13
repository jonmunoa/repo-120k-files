// fichero 47461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47461;

Registro47461 crear_registro47461(int id) {
    Registro47461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47461(Registro47461 r) {
    return r.valor + r.id;
}

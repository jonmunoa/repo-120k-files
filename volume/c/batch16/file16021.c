// fichero 16021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16021;

Registro16021 crear_registro16021(int id) {
    Registro16021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16021(Registro16021 r) {
    return r.valor + r.id;
}

// fichero 33153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33153;

Registro33153 crear_registro33153(int id) {
    Registro33153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33153(Registro33153 r) {
    return r.valor + r.id;
}

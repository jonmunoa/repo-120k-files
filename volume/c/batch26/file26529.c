// fichero 26529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26529;

Registro26529 crear_registro26529(int id) {
    Registro26529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26529(Registro26529 r) {
    return r.valor + r.id;
}

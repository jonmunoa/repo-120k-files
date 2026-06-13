// fichero 46521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46521;

Registro46521 crear_registro46521(int id) {
    Registro46521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46521(Registro46521 r) {
    return r.valor + r.id;
}

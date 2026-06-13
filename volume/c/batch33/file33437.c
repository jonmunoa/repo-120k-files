// fichero 33437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33437;

Registro33437 crear_registro33437(int id) {
    Registro33437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33437(Registro33437 r) {
    return r.valor + r.id;
}

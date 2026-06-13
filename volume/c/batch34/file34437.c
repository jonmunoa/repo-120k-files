// fichero 34437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34437;

Registro34437 crear_registro34437(int id) {
    Registro34437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34437(Registro34437 r) {
    return r.valor + r.id;
}

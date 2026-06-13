// fichero 6301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6301;

Registro6301 crear_registro6301(int id) {
    Registro6301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6301(Registro6301 r) {
    return r.valor + r.id;
}

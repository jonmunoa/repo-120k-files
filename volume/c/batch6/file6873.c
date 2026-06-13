// fichero 6873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6873;

Registro6873 crear_registro6873(int id) {
    Registro6873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6873(Registro6873 r) {
    return r.valor + r.id;
}

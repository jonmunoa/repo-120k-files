// fichero 20021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20021;

Registro20021 crear_registro20021(int id) {
    Registro20021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20021(Registro20021 r) {
    return r.valor + r.id;
}

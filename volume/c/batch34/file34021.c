// fichero 34021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34021;

Registro34021 crear_registro34021(int id) {
    Registro34021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34021(Registro34021 r) {
    return r.valor + r.id;
}

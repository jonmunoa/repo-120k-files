// fichero 33021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33021;

Registro33021 crear_registro33021(int id) {
    Registro33021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33021(Registro33021 r) {
    return r.valor + r.id;
}

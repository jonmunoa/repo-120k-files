// fichero 49021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49021;

Registro49021 crear_registro49021(int id) {
    Registro49021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49021(Registro49021 r) {
    return r.valor + r.id;
}

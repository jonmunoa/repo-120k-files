// fichero 40021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40021;

Registro40021 crear_registro40021(int id) {
    Registro40021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40021(Registro40021 r) {
    return r.valor + r.id;
}

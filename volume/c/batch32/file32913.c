// fichero 32913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32913;

Registro32913 crear_registro32913(int id) {
    Registro32913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32913(Registro32913 r) {
    return r.valor + r.id;
}

// fichero 26685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26685;

Registro26685 crear_registro26685(int id) {
    Registro26685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26685(Registro26685 r) {
    return r.valor + r.id;
}

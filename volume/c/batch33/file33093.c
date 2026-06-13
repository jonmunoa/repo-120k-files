// fichero 33093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33093;

Registro33093 crear_registro33093(int id) {
    Registro33093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33093(Registro33093 r) {
    return r.valor + r.id;
}

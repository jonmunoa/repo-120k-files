// fichero 26461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26461;

Registro26461 crear_registro26461(int id) {
    Registro26461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26461(Registro26461 r) {
    return r.valor + r.id;
}

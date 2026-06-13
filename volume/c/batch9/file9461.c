// fichero 9461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9461;

Registro9461 crear_registro9461(int id) {
    Registro9461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9461(Registro9461 r) {
    return r.valor + r.id;
}

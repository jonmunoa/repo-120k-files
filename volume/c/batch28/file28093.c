// fichero 28093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28093;

Registro28093 crear_registro28093(int id) {
    Registro28093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28093(Registro28093 r) {
    return r.valor + r.id;
}

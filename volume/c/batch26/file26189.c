// fichero 26189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26189;

Registro26189 crear_registro26189(int id) {
    Registro26189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26189(Registro26189 r) {
    return r.valor + r.id;
}

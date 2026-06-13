// fichero 26733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26733;

Registro26733 crear_registro26733(int id) {
    Registro26733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26733(Registro26733 r) {
    return r.valor + r.id;
}

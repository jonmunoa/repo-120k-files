// fichero 26537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26537;

Registro26537 crear_registro26537(int id) {
    Registro26537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26537(Registro26537 r) {
    return r.valor + r.id;
}

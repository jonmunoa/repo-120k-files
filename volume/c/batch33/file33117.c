// fichero 33117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33117;

Registro33117 crear_registro33117(int id) {
    Registro33117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33117(Registro33117 r) {
    return r.valor + r.id;
}

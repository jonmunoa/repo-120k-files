// fichero 53033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53033;

Registro53033 crear_registro53033(int id) {
    Registro53033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53033(Registro53033 r) {
    return r.valor + r.id;
}

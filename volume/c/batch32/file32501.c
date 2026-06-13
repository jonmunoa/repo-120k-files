// fichero 32501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32501;

Registro32501 crear_registro32501(int id) {
    Registro32501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32501(Registro32501 r) {
    return r.valor + r.id;
}

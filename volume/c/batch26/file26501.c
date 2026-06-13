// fichero 26501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26501;

Registro26501 crear_registro26501(int id) {
    Registro26501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26501(Registro26501 r) {
    return r.valor + r.id;
}

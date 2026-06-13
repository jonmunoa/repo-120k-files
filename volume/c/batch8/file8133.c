// fichero 8133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8133;

Registro8133 crear_registro8133(int id) {
    Registro8133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8133(Registro8133 r) {
    return r.valor + r.id;
}

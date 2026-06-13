// fichero 6133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6133;

Registro6133 crear_registro6133(int id) {
    Registro6133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6133(Registro6133 r) {
    return r.valor + r.id;
}

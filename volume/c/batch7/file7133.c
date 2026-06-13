// fichero 7133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7133;

Registro7133 crear_registro7133(int id) {
    Registro7133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7133(Registro7133 r) {
    return r.valor + r.id;
}

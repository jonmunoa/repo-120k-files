// fichero 39133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39133;

Registro39133 crear_registro39133(int id) {
    Registro39133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39133(Registro39133 r) {
    return r.valor + r.id;
}

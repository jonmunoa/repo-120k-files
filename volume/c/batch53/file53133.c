// fichero 53133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53133;

Registro53133 crear_registro53133(int id) {
    Registro53133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53133(Registro53133 r) {
    return r.valor + r.id;
}

// fichero 15705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15705;

Registro15705 crear_registro15705(int id) {
    Registro15705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15705(Registro15705 r) {
    return r.valor + r.id;
}

// fichero 15225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15225;

Registro15225 crear_registro15225(int id) {
    Registro15225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15225(Registro15225 r) {
    return r.valor + r.id;
}

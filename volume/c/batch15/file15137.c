// fichero 15137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15137;

Registro15137 crear_registro15137(int id) {
    Registro15137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15137(Registro15137 r) {
    return r.valor + r.id;
}

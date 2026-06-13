// fichero 53253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53253;

Registro53253 crear_registro53253(int id) {
    Registro53253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53253(Registro53253 r) {
    return r.valor + r.id;
}

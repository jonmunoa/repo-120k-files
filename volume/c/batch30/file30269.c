// fichero 30269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30269;

Registro30269 crear_registro30269(int id) {
    Registro30269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30269(Registro30269 r) {
    return r.valor + r.id;
}

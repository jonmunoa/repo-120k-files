// fichero 39237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39237;

Registro39237 crear_registro39237(int id) {
    Registro39237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39237(Registro39237 r) {
    return r.valor + r.id;
}

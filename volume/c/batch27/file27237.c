// fichero 27237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27237;

Registro27237 crear_registro27237(int id) {
    Registro27237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27237(Registro27237 r) {
    return r.valor + r.id;
}

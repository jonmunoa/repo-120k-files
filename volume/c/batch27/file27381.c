// fichero 27381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27381;

Registro27381 crear_registro27381(int id) {
    Registro27381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27381(Registro27381 r) {
    return r.valor + r.id;
}

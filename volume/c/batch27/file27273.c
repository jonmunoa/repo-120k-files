// fichero 27273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27273;

Registro27273 crear_registro27273(int id) {
    Registro27273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27273(Registro27273 r) {
    return r.valor + r.id;
}

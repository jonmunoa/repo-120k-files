// fichero 32593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32593;

Registro32593 crear_registro32593(int id) {
    Registro32593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32593(Registro32593 r) {
    return r.valor + r.id;
}

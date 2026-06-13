// fichero 29269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29269;

Registro29269 crear_registro29269(int id) {
    Registro29269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29269(Registro29269 r) {
    return r.valor + r.id;
}

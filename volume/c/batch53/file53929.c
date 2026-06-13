// fichero 53929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53929;

Registro53929 crear_registro53929(int id) {
    Registro53929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53929(Registro53929 r) {
    return r.valor + r.id;
}

// fichero 53237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53237;

Registro53237 crear_registro53237(int id) {
    Registro53237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53237(Registro53237 r) {
    return r.valor + r.id;
}

// fichero 53077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53077;

Registro53077 crear_registro53077(int id) {
    Registro53077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53077(Registro53077 r) {
    return r.valor + r.id;
}

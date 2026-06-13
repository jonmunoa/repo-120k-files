// fichero 53761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53761;

Registro53761 crear_registro53761(int id) {
    Registro53761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53761(Registro53761 r) {
    return r.valor + r.id;
}

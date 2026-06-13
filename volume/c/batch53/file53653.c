// fichero 53653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53653;

Registro53653 crear_registro53653(int id) {
    Registro53653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53653(Registro53653 r) {
    return r.valor + r.id;
}

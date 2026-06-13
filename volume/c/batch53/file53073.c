// fichero 53073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53073;

Registro53073 crear_registro53073(int id) {
    Registro53073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53073(Registro53073 r) {
    return r.valor + r.id;
}

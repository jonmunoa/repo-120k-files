// fichero 20649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20649;

Registro20649 crear_registro20649(int id) {
    Registro20649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20649(Registro20649 r) {
    return r.valor + r.id;
}

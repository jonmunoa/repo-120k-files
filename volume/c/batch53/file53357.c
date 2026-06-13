// fichero 53357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53357;

Registro53357 crear_registro53357(int id) {
    Registro53357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53357(Registro53357 r) {
    return r.valor + r.id;
}

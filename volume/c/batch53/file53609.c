// fichero 53609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53609;

Registro53609 crear_registro53609(int id) {
    Registro53609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53609(Registro53609 r) {
    return r.valor + r.id;
}

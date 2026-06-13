// fichero 15609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15609;

Registro15609 crear_registro15609(int id) {
    Registro15609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15609(Registro15609 r) {
    return r.valor + r.id;
}

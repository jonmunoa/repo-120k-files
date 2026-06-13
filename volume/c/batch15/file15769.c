// fichero 15769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15769;

Registro15769 crear_registro15769(int id) {
    Registro15769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15769(Registro15769 r) {
    return r.valor + r.id;
}

// fichero 40473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40473;

Registro40473 crear_registro40473(int id) {
    Registro40473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40473(Registro40473 r) {
    return r.valor + r.id;
}

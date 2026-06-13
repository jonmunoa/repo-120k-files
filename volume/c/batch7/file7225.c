// fichero 7225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7225;

Registro7225 crear_registro7225(int id) {
    Registro7225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7225(Registro7225 r) {
    return r.valor + r.id;
}

// fichero 27269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27269;

Registro27269 crear_registro27269(int id) {
    Registro27269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27269(Registro27269 r) {
    return r.valor + r.id;
}

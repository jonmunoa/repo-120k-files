// fichero 27129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27129;

Registro27129 crear_registro27129(int id) {
    Registro27129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27129(Registro27129 r) {
    return r.valor + r.id;
}

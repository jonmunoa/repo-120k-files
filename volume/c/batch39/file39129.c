// fichero 39129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39129;

Registro39129 crear_registro39129(int id) {
    Registro39129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39129(Registro39129 r) {
    return r.valor + r.id;
}

// fichero 31349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31349;

Registro31349 crear_registro31349(int id) {
    Registro31349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31349(Registro31349 r) {
    return r.valor + r.id;
}

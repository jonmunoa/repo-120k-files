// fichero 39349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39349;

Registro39349 crear_registro39349(int id) {
    Registro39349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39349(Registro39349 r) {
    return r.valor + r.id;
}

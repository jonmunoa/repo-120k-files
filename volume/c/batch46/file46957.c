// fichero 46957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46957;

Registro46957 crear_registro46957(int id) {
    Registro46957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46957(Registro46957 r) {
    return r.valor + r.id;
}

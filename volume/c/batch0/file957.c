// fichero 957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro957;

Registro957 crear_registro957(int id) {
    Registro957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro957(Registro957 r) {
    return r.valor + r.id;
}

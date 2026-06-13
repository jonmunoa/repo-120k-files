// fichero 53957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53957;

Registro53957 crear_registro53957(int id) {
    Registro53957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53957(Registro53957 r) {
    return r.valor + r.id;
}

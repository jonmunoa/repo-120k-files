// fichero 30957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30957;

Registro30957 crear_registro30957(int id) {
    Registro30957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30957(Registro30957 r) {
    return r.valor + r.id;
}

// fichero 39037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39037;

Registro39037 crear_registro39037(int id) {
    Registro39037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39037(Registro39037 r) {
    return r.valor + r.id;
}

// fichero 39005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39005;

Registro39005 crear_registro39005(int id) {
    Registro39005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39005(Registro39005 r) {
    return r.valor + r.id;
}

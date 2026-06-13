// fichero 39941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39941;

Registro39941 crear_registro39941(int id) {
    Registro39941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39941(Registro39941 r) {
    return r.valor + r.id;
}

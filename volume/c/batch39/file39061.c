// fichero 39061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39061;

Registro39061 crear_registro39061(int id) {
    Registro39061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39061(Registro39061 r) {
    return r.valor + r.id;
}

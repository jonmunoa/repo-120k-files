// fichero 39621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39621;

Registro39621 crear_registro39621(int id) {
    Registro39621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39621(Registro39621 r) {
    return r.valor + r.id;
}

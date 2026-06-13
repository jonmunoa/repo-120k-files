// fichero 39757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39757;

Registro39757 crear_registro39757(int id) {
    Registro39757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39757(Registro39757 r) {
    return r.valor + r.id;
}

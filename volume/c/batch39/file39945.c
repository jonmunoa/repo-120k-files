// fichero 39945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39945;

Registro39945 crear_registro39945(int id) {
    Registro39945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39945(Registro39945 r) {
    return r.valor + r.id;
}

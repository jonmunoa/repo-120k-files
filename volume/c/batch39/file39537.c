// fichero 39537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39537;

Registro39537 crear_registro39537(int id) {
    Registro39537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39537(Registro39537 r) {
    return r.valor + r.id;
}

// fichero 33905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33905;

Registro33905 crear_registro33905(int id) {
    Registro33905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33905(Registro33905 r) {
    return r.valor + r.id;
}

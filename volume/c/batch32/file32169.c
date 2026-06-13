// fichero 32169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32169;

Registro32169 crear_registro32169(int id) {
    Registro32169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32169(Registro32169 r) {
    return r.valor + r.id;
}

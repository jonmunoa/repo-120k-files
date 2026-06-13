// fichero 39169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39169;

Registro39169 crear_registro39169(int id) {
    Registro39169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39169(Registro39169 r) {
    return r.valor + r.id;
}

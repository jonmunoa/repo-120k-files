// fichero 15153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15153;

Registro15153 crear_registro15153(int id) {
    Registro15153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15153(Registro15153 r) {
    return r.valor + r.id;
}

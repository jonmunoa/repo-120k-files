// fichero 30249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30249;

Registro30249 crear_registro30249(int id) {
    Registro30249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30249(Registro30249 r) {
    return r.valor + r.id;
}

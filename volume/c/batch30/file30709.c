// fichero 30709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30709;

Registro30709 crear_registro30709(int id) {
    Registro30709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30709(Registro30709 r) {
    return r.valor + r.id;
}

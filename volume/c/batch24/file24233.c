// fichero 24233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24233;

Registro24233 crear_registro24233(int id) {
    Registro24233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24233(Registro24233 r) {
    return r.valor + r.id;
}

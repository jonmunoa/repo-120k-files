// fichero 27173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27173;

Registro27173 crear_registro27173(int id) {
    Registro27173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27173(Registro27173 r) {
    return r.valor + r.id;
}

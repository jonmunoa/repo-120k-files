// fichero 27253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27253;

Registro27253 crear_registro27253(int id) {
    Registro27253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27253(Registro27253 r) {
    return r.valor + r.id;
}

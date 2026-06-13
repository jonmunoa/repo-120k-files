// fichero 32601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32601;

Registro32601 crear_registro32601(int id) {
    Registro32601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32601(Registro32601 r) {
    return r.valor + r.id;
}

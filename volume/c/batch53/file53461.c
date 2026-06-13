// fichero 53461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53461;

Registro53461 crear_registro53461(int id) {
    Registro53461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53461(Registro53461 r) {
    return r.valor + r.id;
}

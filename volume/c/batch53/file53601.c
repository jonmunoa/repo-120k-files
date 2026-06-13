// fichero 53601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53601;

Registro53601 crear_registro53601(int id) {
    Registro53601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53601(Registro53601 r) {
    return r.valor + r.id;
}

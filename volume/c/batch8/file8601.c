// fichero 8601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8601;

Registro8601 crear_registro8601(int id) {
    Registro8601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8601(Registro8601 r) {
    return r.valor + r.id;
}

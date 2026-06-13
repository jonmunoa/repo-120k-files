// fichero 38601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38601;

Registro38601 crear_registro38601(int id) {
    Registro38601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38601(Registro38601 r) {
    return r.valor + r.id;
}

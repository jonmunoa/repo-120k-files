// fichero 17281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17281;

Registro17281 crear_registro17281(int id) {
    Registro17281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17281(Registro17281 r) {
    return r.valor + r.id;
}

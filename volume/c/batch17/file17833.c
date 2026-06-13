// fichero 17833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17833;

Registro17833 crear_registro17833(int id) {
    Registro17833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17833(Registro17833 r) {
    return r.valor + r.id;
}

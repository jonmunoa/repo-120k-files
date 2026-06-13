// fichero 17713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17713;

Registro17713 crear_registro17713(int id) {
    Registro17713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17713(Registro17713 r) {
    return r.valor + r.id;
}

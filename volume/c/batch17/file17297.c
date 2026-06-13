// fichero 17297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17297;

Registro17297 crear_registro17297(int id) {
    Registro17297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17297(Registro17297 r) {
    return r.valor + r.id;
}

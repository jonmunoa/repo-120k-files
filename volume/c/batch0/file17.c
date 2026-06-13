// fichero 17 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17;

Registro17 crear_registro17(int id) {
    Registro17 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17(Registro17 r) {
    return r.valor + r.id;
}

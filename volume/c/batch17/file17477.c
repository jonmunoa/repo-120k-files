// fichero 17477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17477;

Registro17477 crear_registro17477(int id) {
    Registro17477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17477(Registro17477 r) {
    return r.valor + r.id;
}

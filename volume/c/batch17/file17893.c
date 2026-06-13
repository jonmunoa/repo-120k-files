// fichero 17893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17893;

Registro17893 crear_registro17893(int id) {
    Registro17893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17893(Registro17893 r) {
    return r.valor + r.id;
}

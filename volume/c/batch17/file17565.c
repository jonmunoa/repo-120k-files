// fichero 17565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17565;

Registro17565 crear_registro17565(int id) {
    Registro17565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17565(Registro17565 r) {
    return r.valor + r.id;
}

// fichero 17493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17493;

Registro17493 crear_registro17493(int id) {
    Registro17493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17493(Registro17493 r) {
    return r.valor + r.id;
}

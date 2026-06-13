// fichero 26525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26525;

Registro26525 crear_registro26525(int id) {
    Registro26525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26525(Registro26525 r) {
    return r.valor + r.id;
}

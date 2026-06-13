// fichero 17453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17453;

Registro17453 crear_registro17453(int id) {
    Registro17453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17453(Registro17453 r) {
    return r.valor + r.id;
}

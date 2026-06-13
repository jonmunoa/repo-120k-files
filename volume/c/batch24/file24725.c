// fichero 24725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24725;

Registro24725 crear_registro24725(int id) {
    Registro24725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24725(Registro24725 r) {
    return r.valor + r.id;
}

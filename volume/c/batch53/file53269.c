// fichero 53269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53269;

Registro53269 crear_registro53269(int id) {
    Registro53269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53269(Registro53269 r) {
    return r.valor + r.id;
}

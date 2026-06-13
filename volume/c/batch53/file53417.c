// fichero 53417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53417;

Registro53417 crear_registro53417(int id) {
    Registro53417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53417(Registro53417 r) {
    return r.valor + r.id;
}

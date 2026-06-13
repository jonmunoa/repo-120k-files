// fichero 28393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28393;

Registro28393 crear_registro28393(int id) {
    Registro28393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28393(Registro28393 r) {
    return r.valor + r.id;
}

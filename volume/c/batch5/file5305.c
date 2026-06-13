// fichero 5305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5305;

Registro5305 crear_registro5305(int id) {
    Registro5305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5305(Registro5305 r) {
    return r.valor + r.id;
}

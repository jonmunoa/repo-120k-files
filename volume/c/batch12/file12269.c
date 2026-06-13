// fichero 12269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12269;

Registro12269 crear_registro12269(int id) {
    Registro12269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12269(Registro12269 r) {
    return r.valor + r.id;
}

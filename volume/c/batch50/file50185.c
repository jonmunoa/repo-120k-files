// fichero 50185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50185;

Registro50185 crear_registro50185(int id) {
    Registro50185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50185(Registro50185 r) {
    return r.valor + r.id;
}

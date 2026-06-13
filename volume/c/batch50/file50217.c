// fichero 50217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50217;

Registro50217 crear_registro50217(int id) {
    Registro50217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50217(Registro50217 r) {
    return r.valor + r.id;
}

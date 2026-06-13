// fichero 50005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50005;

Registro50005 crear_registro50005(int id) {
    Registro50005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50005(Registro50005 r) {
    return r.valor + r.id;
}

// fichero 50477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50477;

Registro50477 crear_registro50477(int id) {
    Registro50477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50477(Registro50477 r) {
    return r.valor + r.id;
}

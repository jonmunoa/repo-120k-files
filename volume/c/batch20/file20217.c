// fichero 20217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20217;

Registro20217 crear_registro20217(int id) {
    Registro20217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20217(Registro20217 r) {
    return r.valor + r.id;
}

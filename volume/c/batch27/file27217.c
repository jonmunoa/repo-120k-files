// fichero 27217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27217;

Registro27217 crear_registro27217(int id) {
    Registro27217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27217(Registro27217 r) {
    return r.valor + r.id;
}

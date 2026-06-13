// fichero 53217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53217;

Registro53217 crear_registro53217(int id) {
    Registro53217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53217(Registro53217 r) {
    return r.valor + r.id;
}

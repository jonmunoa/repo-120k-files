// fichero 20709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20709;

Registro20709 crear_registro20709(int id) {
    Registro20709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20709(Registro20709 r) {
    return r.valor + r.id;
}

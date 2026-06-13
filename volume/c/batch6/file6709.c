// fichero 6709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6709;

Registro6709 crear_registro6709(int id) {
    Registro6709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6709(Registro6709 r) {
    return r.valor + r.id;
}

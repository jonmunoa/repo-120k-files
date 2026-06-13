// fichero 27645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27645;

Registro27645 crear_registro27645(int id) {
    Registro27645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27645(Registro27645 r) {
    return r.valor + r.id;
}

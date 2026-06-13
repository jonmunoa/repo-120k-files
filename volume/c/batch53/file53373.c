// fichero 53373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53373;

Registro53373 crear_registro53373(int id) {
    Registro53373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53373(Registro53373 r) {
    return r.valor + r.id;
}

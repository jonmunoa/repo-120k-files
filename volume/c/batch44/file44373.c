// fichero 44373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44373;

Registro44373 crear_registro44373(int id) {
    Registro44373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44373(Registro44373 r) {
    return r.valor + r.id;
}

// fichero 46373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46373;

Registro46373 crear_registro46373(int id) {
    Registro46373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46373(Registro46373 r) {
    return r.valor + r.id;
}

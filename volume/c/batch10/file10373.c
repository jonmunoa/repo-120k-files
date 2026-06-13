// fichero 10373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10373;

Registro10373 crear_registro10373(int id) {
    Registro10373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10373(Registro10373 r) {
    return r.valor + r.id;
}

// fichero 6329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6329;

Registro6329 crear_registro6329(int id) {
    Registro6329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6329(Registro6329 r) {
    return r.valor + r.id;
}

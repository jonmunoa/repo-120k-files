// fichero 48565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48565;

Registro48565 crear_registro48565(int id) {
    Registro48565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48565(Registro48565 r) {
    return r.valor + r.id;
}

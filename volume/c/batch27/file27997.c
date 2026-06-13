// fichero 27997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27997;

Registro27997 crear_registro27997(int id) {
    Registro27997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27997(Registro27997 r) {
    return r.valor + r.id;
}

// fichero 27677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27677;

Registro27677 crear_registro27677(int id) {
    Registro27677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27677(Registro27677 r) {
    return r.valor + r.id;
}

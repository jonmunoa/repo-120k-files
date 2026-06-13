// fichero 45533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45533;

Registro45533 crear_registro45533(int id) {
    Registro45533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45533(Registro45533 r) {
    return r.valor + r.id;
}

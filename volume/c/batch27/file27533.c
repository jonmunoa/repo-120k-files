// fichero 27533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27533;

Registro27533 crear_registro27533(int id) {
    Registro27533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27533(Registro27533 r) {
    return r.valor + r.id;
}

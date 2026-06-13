// fichero 27861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27861;

Registro27861 crear_registro27861(int id) {
    Registro27861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27861(Registro27861 r) {
    return r.valor + r.id;
}

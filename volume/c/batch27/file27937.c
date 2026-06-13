// fichero 27937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27937;

Registro27937 crear_registro27937(int id) {
    Registro27937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27937(Registro27937 r) {
    return r.valor + r.id;
}

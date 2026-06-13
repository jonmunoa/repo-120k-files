// fichero 14369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14369;

Registro14369 crear_registro14369(int id) {
    Registro14369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14369(Registro14369 r) {
    return r.valor + r.id;
}

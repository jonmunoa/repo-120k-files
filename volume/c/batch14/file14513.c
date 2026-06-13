// fichero 14513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14513;

Registro14513 crear_registro14513(int id) {
    Registro14513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14513(Registro14513 r) {
    return r.valor + r.id;
}

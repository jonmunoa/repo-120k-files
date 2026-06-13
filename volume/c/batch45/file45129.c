// fichero 45129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45129;

Registro45129 crear_registro45129(int id) {
    Registro45129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45129(Registro45129 r) {
    return r.valor + r.id;
}

// fichero 26513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26513;

Registro26513 crear_registro26513(int id) {
    Registro26513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26513(Registro26513 r) {
    return r.valor + r.id;
}

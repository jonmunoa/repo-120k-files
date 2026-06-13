// fichero 45513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45513;

Registro45513 crear_registro45513(int id) {
    Registro45513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45513(Registro45513 r) {
    return r.valor + r.id;
}

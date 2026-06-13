// fichero 513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro513;

Registro513 crear_registro513(int id) {
    Registro513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro513(Registro513 r) {
    return r.valor + r.id;
}

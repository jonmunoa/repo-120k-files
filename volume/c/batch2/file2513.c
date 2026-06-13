// fichero 2513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2513;

Registro2513 crear_registro2513(int id) {
    Registro2513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2513(Registro2513 r) {
    return r.valor + r.id;
}

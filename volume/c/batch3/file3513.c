// fichero 3513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3513;

Registro3513 crear_registro3513(int id) {
    Registro3513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3513(Registro3513 r) {
    return r.valor + r.id;
}

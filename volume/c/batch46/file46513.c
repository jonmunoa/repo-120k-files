// fichero 46513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46513;

Registro46513 crear_registro46513(int id) {
    Registro46513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46513(Registro46513 r) {
    return r.valor + r.id;
}

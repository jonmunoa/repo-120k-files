// fichero 4513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4513;

Registro4513 crear_registro4513(int id) {
    Registro4513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4513(Registro4513 r) {
    return r.valor + r.id;
}

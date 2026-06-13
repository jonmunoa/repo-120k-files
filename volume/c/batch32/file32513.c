// fichero 32513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32513;

Registro32513 crear_registro32513(int id) {
    Registro32513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32513(Registro32513 r) {
    return r.valor + r.id;
}

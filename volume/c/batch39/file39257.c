// fichero 39257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39257;

Registro39257 crear_registro39257(int id) {
    Registro39257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39257(Registro39257 r) {
    return r.valor + r.id;
}

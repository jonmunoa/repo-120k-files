// fichero 53329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53329;

Registro53329 crear_registro53329(int id) {
    Registro53329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53329(Registro53329 r) {
    return r.valor + r.id;
}

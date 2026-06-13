// fichero 21329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21329;

Registro21329 crear_registro21329(int id) {
    Registro21329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21329(Registro21329 r) {
    return r.valor + r.id;
}

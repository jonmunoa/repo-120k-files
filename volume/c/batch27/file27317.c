// fichero 27317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27317;

Registro27317 crear_registro27317(int id) {
    Registro27317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27317(Registro27317 r) {
    return r.valor + r.id;
}

// fichero 14381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14381;

Registro14381 crear_registro14381(int id) {
    Registro14381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14381(Registro14381 r) {
    return r.valor + r.id;
}

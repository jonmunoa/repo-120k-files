// fichero 4257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4257;

Registro4257 crear_registro4257(int id) {
    Registro4257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4257(Registro4257 r) {
    return r.valor + r.id;
}

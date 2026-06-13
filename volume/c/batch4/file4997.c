// fichero 4997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4997;

Registro4997 crear_registro4997(int id) {
    Registro4997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4997(Registro4997 r) {
    return r.valor + r.id;
}

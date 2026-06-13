// fichero 48757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48757;

Registro48757 crear_registro48757(int id) {
    Registro48757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48757(Registro48757 r) {
    return r.valor + r.id;
}

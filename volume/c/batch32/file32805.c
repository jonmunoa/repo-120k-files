// fichero 32805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32805;

Registro32805 crear_registro32805(int id) {
    Registro32805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32805(Registro32805 r) {
    return r.valor + r.id;
}

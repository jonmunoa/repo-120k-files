// fichero 15557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15557;

Registro15557 crear_registro15557(int id) {
    Registro15557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15557(Registro15557 r) {
    return r.valor + r.id;
}

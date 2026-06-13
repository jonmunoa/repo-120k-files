// fichero 39745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39745;

Registro39745 crear_registro39745(int id) {
    Registro39745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39745(Registro39745 r) {
    return r.valor + r.id;
}

// fichero 33613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33613;

Registro33613 crear_registro33613(int id) {
    Registro33613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33613(Registro33613 r) {
    return r.valor + r.id;
}

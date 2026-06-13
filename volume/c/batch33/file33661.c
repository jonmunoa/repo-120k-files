// fichero 33661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33661;

Registro33661 crear_registro33661(int id) {
    Registro33661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33661(Registro33661 r) {
    return r.valor + r.id;
}

// fichero 33717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33717;

Registro33717 crear_registro33717(int id) {
    Registro33717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33717(Registro33717 r) {
    return r.valor + r.id;
}

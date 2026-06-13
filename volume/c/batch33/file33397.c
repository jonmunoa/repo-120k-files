// fichero 33397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33397;

Registro33397 crear_registro33397(int id) {
    Registro33397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33397(Registro33397 r) {
    return r.valor + r.id;
}

// fichero 53037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53037;

Registro53037 crear_registro53037(int id) {
    Registro53037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53037(Registro53037 r) {
    return r.valor + r.id;
}

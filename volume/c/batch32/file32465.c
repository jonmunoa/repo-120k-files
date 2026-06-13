// fichero 32465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32465;

Registro32465 crear_registro32465(int id) {
    Registro32465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32465(Registro32465 r) {
    return r.valor + r.id;
}

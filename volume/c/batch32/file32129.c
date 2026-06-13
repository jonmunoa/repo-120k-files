// fichero 32129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32129;

Registro32129 crear_registro32129(int id) {
    Registro32129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32129(Registro32129 r) {
    return r.valor + r.id;
}

// fichero 32489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32489;

Registro32489 crear_registro32489(int id) {
    Registro32489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32489(Registro32489 r) {
    return r.valor + r.id;
}

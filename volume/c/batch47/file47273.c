// fichero 47273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47273;

Registro47273 crear_registro47273(int id) {
    Registro47273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47273(Registro47273 r) {
    return r.valor + r.id;
}

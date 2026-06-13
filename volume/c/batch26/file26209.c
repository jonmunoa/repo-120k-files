// fichero 26209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26209;

Registro26209 crear_registro26209(int id) {
    Registro26209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26209(Registro26209 r) {
    return r.valor + r.id;
}

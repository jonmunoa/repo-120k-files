// fichero 26489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26489;

Registro26489 crear_registro26489(int id) {
    Registro26489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26489(Registro26489 r) {
    return r.valor + r.id;
}

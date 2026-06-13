// fichero 26257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26257;

Registro26257 crear_registro26257(int id) {
    Registro26257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26257(Registro26257 r) {
    return r.valor + r.id;
}

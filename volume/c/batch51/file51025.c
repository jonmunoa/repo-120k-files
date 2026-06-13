// fichero 51025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51025;

Registro51025 crear_registro51025(int id) {
    Registro51025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51025(Registro51025 r) {
    return r.valor + r.id;
}

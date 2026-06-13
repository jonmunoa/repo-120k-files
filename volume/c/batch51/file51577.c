// fichero 51577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51577;

Registro51577 crear_registro51577(int id) {
    Registro51577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51577(Registro51577 r) {
    return r.valor + r.id;
}

// fichero 51393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51393;

Registro51393 crear_registro51393(int id) {
    Registro51393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51393(Registro51393 r) {
    return r.valor + r.id;
}

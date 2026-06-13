// fichero 51693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51693;

Registro51693 crear_registro51693(int id) {
    Registro51693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51693(Registro51693 r) {
    return r.valor + r.id;
}

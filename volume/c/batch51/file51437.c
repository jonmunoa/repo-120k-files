// fichero 51437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51437;

Registro51437 crear_registro51437(int id) {
    Registro51437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51437(Registro51437 r) {
    return r.valor + r.id;
}

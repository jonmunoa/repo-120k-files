// fichero 51993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51993;

Registro51993 crear_registro51993(int id) {
    Registro51993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51993(Registro51993 r) {
    return r.valor + r.id;
}

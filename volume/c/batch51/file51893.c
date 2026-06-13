// fichero 51893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51893;

Registro51893 crear_registro51893(int id) {
    Registro51893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51893(Registro51893 r) {
    return r.valor + r.id;
}

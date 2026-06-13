// fichero 51309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51309;

Registro51309 crear_registro51309(int id) {
    Registro51309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51309(Registro51309 r) {
    return r.valor + r.id;
}

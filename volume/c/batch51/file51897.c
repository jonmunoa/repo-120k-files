// fichero 51897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51897;

Registro51897 crear_registro51897(int id) {
    Registro51897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51897(Registro51897 r) {
    return r.valor + r.id;
}

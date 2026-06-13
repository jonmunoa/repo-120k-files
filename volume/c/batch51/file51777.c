// fichero 51777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51777;

Registro51777 crear_registro51777(int id) {
    Registro51777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51777(Registro51777 r) {
    return r.valor + r.id;
}

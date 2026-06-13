// fichero 51513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51513;

Registro51513 crear_registro51513(int id) {
    Registro51513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51513(Registro51513 r) {
    return r.valor + r.id;
}

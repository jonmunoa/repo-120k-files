// fichero 51053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51053;

Registro51053 crear_registro51053(int id) {
    Registro51053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51053(Registro51053 r) {
    return r.valor + r.id;
}

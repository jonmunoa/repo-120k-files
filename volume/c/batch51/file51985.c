// fichero 51985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51985;

Registro51985 crear_registro51985(int id) {
    Registro51985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51985(Registro51985 r) {
    return r.valor + r.id;
}

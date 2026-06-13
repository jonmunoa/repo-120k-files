// fichero 51193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51193;

Registro51193 crear_registro51193(int id) {
    Registro51193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51193(Registro51193 r) {
    return r.valor + r.id;
}

// fichero 51997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51997;

Registro51997 crear_registro51997(int id) {
    Registro51997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51997(Registro51997 r) {
    return r.valor + r.id;
}

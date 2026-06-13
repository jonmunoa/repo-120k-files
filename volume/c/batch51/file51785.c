// fichero 51785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51785;

Registro51785 crear_registro51785(int id) {
    Registro51785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51785(Registro51785 r) {
    return r.valor + r.id;
}

// fichero 51849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51849;

Registro51849 crear_registro51849(int id) {
    Registro51849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51849(Registro51849 r) {
    return r.valor + r.id;
}

// fichero 51649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51649;

Registro51649 crear_registro51649(int id) {
    Registro51649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51649(Registro51649 r) {
    return r.valor + r.id;
}

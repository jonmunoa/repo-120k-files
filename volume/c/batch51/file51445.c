// fichero 51445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51445;

Registro51445 crear_registro51445(int id) {
    Registro51445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51445(Registro51445 r) {
    return r.valor + r.id;
}

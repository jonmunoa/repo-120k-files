// fichero 49805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49805;

Registro49805 crear_registro49805(int id) {
    Registro49805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49805(Registro49805 r) {
    return r.valor + r.id;
}

// fichero 49673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49673;

Registro49673 crear_registro49673(int id) {
    Registro49673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49673(Registro49673 r) {
    return r.valor + r.id;
}

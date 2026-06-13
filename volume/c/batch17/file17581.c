// fichero 17581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17581;

Registro17581 crear_registro17581(int id) {
    Registro17581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17581(Registro17581 r) {
    return r.valor + r.id;
}

// fichero 54721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54721;

Registro54721 crear_registro54721(int id) {
    Registro54721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54721(Registro54721 r) {
    return r.valor + r.id;
}

// fichero 54241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54241;

Registro54241 crear_registro54241(int id) {
    Registro54241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54241(Registro54241 r) {
    return r.valor + r.id;
}

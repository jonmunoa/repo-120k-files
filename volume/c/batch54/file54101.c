// fichero 54101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54101;

Registro54101 crear_registro54101(int id) {
    Registro54101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54101(Registro54101 r) {
    return r.valor + r.id;
}

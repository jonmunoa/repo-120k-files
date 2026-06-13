// fichero 54693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54693;

Registro54693 crear_registro54693(int id) {
    Registro54693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54693(Registro54693 r) {
    return r.valor + r.id;
}

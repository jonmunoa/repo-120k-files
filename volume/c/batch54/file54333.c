// fichero 54333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54333;

Registro54333 crear_registro54333(int id) {
    Registro54333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54333(Registro54333 r) {
    return r.valor + r.id;
}

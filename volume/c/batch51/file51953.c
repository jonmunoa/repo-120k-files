// fichero 51953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51953;

Registro51953 crear_registro51953(int id) {
    Registro51953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51953(Registro51953 r) {
    return r.valor + r.id;
}

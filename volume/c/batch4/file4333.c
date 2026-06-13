// fichero 4333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4333;

Registro4333 crear_registro4333(int id) {
    Registro4333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4333(Registro4333 r) {
    return r.valor + r.id;
}

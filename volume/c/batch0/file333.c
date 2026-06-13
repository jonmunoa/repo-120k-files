// fichero 333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro333;

Registro333 crear_registro333(int id) {
    Registro333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro333(Registro333 r) {
    return r.valor + r.id;
}

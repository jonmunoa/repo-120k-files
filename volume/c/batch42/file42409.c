// fichero 42409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42409;

Registro42409 crear_registro42409(int id) {
    Registro42409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42409(Registro42409 r) {
    return r.valor + r.id;
}

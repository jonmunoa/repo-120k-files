// fichero 32857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32857;

Registro32857 crear_registro32857(int id) {
    Registro32857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32857(Registro32857 r) {
    return r.valor + r.id;
}

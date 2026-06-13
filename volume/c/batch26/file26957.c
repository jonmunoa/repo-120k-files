// fichero 26957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26957;

Registro26957 crear_registro26957(int id) {
    Registro26957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26957(Registro26957 r) {
    return r.valor + r.id;
}

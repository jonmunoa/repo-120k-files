// fichero 26137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26137;

Registro26137 crear_registro26137(int id) {
    Registro26137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26137(Registro26137 r) {
    return r.valor + r.id;
}

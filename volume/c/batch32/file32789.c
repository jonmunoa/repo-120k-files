// fichero 32789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32789;

Registro32789 crear_registro32789(int id) {
    Registro32789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32789(Registro32789 r) {
    return r.valor + r.id;
}

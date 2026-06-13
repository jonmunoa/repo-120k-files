// fichero 26581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26581;

Registro26581 crear_registro26581(int id) {
    Registro26581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26581(Registro26581 r) {
    return r.valor + r.id;
}

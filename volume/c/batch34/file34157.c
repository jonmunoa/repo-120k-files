// fichero 34157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34157;

Registro34157 crear_registro34157(int id) {
    Registro34157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34157(Registro34157 r) {
    return r.valor + r.id;
}

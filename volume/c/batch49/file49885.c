// fichero 49885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49885;

Registro49885 crear_registro49885(int id) {
    Registro49885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49885(Registro49885 r) {
    return r.valor + r.id;
}

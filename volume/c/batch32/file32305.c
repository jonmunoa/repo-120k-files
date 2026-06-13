// fichero 32305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32305;

Registro32305 crear_registro32305(int id) {
    Registro32305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32305(Registro32305 r) {
    return r.valor + r.id;
}

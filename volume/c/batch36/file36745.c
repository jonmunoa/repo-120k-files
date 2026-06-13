// fichero 36745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36745;

Registro36745 crear_registro36745(int id) {
    Registro36745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36745(Registro36745 r) {
    return r.valor + r.id;
}

// fichero 52157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52157;

Registro52157 crear_registro52157(int id) {
    Registro52157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52157(Registro52157 r) {
    return r.valor + r.id;
}

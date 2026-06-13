// fichero 6949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6949;

Registro6949 crear_registro6949(int id) {
    Registro6949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6949(Registro6949 r) {
    return r.valor + r.id;
}

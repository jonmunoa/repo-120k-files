// fichero 6021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6021;

Registro6021 crear_registro6021(int id) {
    Registro6021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6021(Registro6021 r) {
    return r.valor + r.id;
}

// fichero 24021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24021;

Registro24021 crear_registro24021(int id) {
    Registro24021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24021(Registro24021 r) {
    return r.valor + r.id;
}

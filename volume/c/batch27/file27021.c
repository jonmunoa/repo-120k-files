// fichero 27021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27021;

Registro27021 crear_registro27021(int id) {
    Registro27021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27021(Registro27021 r) {
    return r.valor + r.id;
}

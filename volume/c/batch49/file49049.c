// fichero 49049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49049;

Registro49049 crear_registro49049(int id) {
    Registro49049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49049(Registro49049 r) {
    return r.valor + r.id;
}

// fichero 50101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50101;

Registro50101 crear_registro50101(int id) {
    Registro50101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50101(Registro50101 r) {
    return r.valor + r.id;
}

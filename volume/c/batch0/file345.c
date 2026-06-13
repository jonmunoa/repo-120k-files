// fichero 345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro345;

Registro345 crear_registro345(int id) {
    Registro345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro345(Registro345 r) {
    return r.valor + r.id;
}

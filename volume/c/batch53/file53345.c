// fichero 53345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53345;

Registro53345 crear_registro53345(int id) {
    Registro53345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53345(Registro53345 r) {
    return r.valor + r.id;
}

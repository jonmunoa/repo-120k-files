// fichero 16005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16005;

Registro16005 crear_registro16005(int id) {
    Registro16005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16005(Registro16005 r) {
    return r.valor + r.id;
}

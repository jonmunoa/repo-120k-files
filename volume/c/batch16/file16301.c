// fichero 16301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16301;

Registro16301 crear_registro16301(int id) {
    Registro16301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16301(Registro16301 r) {
    return r.valor + r.id;
}

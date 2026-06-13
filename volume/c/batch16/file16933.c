// fichero 16933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16933;

Registro16933 crear_registro16933(int id) {
    Registro16933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16933(Registro16933 r) {
    return r.valor + r.id;
}

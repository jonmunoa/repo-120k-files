// fichero 27933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27933;

Registro27933 crear_registro27933(int id) {
    Registro27933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27933(Registro27933 r) {
    return r.valor + r.id;
}

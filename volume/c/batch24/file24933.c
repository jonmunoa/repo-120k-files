// fichero 24933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24933;

Registro24933 crear_registro24933(int id) {
    Registro24933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24933(Registro24933 r) {
    return r.valor + r.id;
}

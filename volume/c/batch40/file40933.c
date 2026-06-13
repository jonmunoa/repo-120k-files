// fichero 40933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40933;

Registro40933 crear_registro40933(int id) {
    Registro40933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40933(Registro40933 r) {
    return r.valor + r.id;
}

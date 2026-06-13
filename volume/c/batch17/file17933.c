// fichero 17933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17933;

Registro17933 crear_registro17933(int id) {
    Registro17933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17933(Registro17933 r) {
    return r.valor + r.id;
}

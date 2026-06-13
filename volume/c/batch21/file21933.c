// fichero 21933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21933;

Registro21933 crear_registro21933(int id) {
    Registro21933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21933(Registro21933 r) {
    return r.valor + r.id;
}

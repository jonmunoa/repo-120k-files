// fichero 21861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21861;

Registro21861 crear_registro21861(int id) {
    Registro21861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21861(Registro21861 r) {
    return r.valor + r.id;
}

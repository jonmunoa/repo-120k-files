// fichero 21881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21881;

Registro21881 crear_registro21881(int id) {
    Registro21881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21881(Registro21881 r) {
    return r.valor + r.id;
}

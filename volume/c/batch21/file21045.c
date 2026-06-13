// fichero 21045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21045;

Registro21045 crear_registro21045(int id) {
    Registro21045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21045(Registro21045 r) {
    return r.valor + r.id;
}

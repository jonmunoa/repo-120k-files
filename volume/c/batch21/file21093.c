// fichero 21093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21093;

Registro21093 crear_registro21093(int id) {
    Registro21093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21093(Registro21093 r) {
    return r.valor + r.id;
}

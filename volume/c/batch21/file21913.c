// fichero 21913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21913;

Registro21913 crear_registro21913(int id) {
    Registro21913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21913(Registro21913 r) {
    return r.valor + r.id;
}

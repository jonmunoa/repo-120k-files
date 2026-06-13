// fichero 21929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21929;

Registro21929 crear_registro21929(int id) {
    Registro21929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21929(Registro21929 r) {
    return r.valor + r.id;
}

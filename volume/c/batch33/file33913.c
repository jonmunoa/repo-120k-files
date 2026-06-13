// fichero 33913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33913;

Registro33913 crear_registro33913(int id) {
    Registro33913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33913(Registro33913 r) {
    return r.valor + r.id;
}

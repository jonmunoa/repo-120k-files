// fichero 18913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18913;

Registro18913 crear_registro18913(int id) {
    Registro18913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18913(Registro18913 r) {
    return r.valor + r.id;
}

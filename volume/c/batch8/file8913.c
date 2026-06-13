// fichero 8913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8913;

Registro8913 crear_registro8913(int id) {
    Registro8913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8913(Registro8913 r) {
    return r.valor + r.id;
}

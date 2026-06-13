// fichero 6749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6749;

Registro6749 crear_registro6749(int id) {
    Registro6749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6749(Registro6749 r) {
    return r.valor + r.id;
}

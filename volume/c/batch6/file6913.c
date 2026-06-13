// fichero 6913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6913;

Registro6913 crear_registro6913(int id) {
    Registro6913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6913(Registro6913 r) {
    return r.valor + r.id;
}

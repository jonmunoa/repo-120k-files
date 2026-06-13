// fichero 28189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28189;

Registro28189 crear_registro28189(int id) {
    Registro28189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28189(Registro28189 r) {
    return r.valor + r.id;
}

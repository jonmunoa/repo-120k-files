// fichero 28453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28453;

Registro28453 crear_registro28453(int id) {
    Registro28453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28453(Registro28453 r) {
    return r.valor + r.id;
}

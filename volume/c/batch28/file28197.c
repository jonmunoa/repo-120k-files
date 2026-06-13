// fichero 28197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28197;

Registro28197 crear_registro28197(int id) {
    Registro28197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28197(Registro28197 r) {
    return r.valor + r.id;
}

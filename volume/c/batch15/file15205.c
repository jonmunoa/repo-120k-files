// fichero 15205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15205;

Registro15205 crear_registro15205(int id) {
    Registro15205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15205(Registro15205 r) {
    return r.valor + r.id;
}

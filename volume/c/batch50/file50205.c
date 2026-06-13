// fichero 50205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50205;

Registro50205 crear_registro50205(int id) {
    Registro50205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50205(Registro50205 r) {
    return r.valor + r.id;
}

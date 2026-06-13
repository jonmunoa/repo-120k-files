// fichero 5205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5205;

Registro5205 crear_registro5205(int id) {
    Registro5205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5205(Registro5205 r) {
    return r.valor + r.id;
}

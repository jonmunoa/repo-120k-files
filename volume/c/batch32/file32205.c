// fichero 32205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32205;

Registro32205 crear_registro32205(int id) {
    Registro32205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32205(Registro32205 r) {
    return r.valor + r.id;
}

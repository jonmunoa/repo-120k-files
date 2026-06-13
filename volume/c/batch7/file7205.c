// fichero 7205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7205;

Registro7205 crear_registro7205(int id) {
    Registro7205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7205(Registro7205 r) {
    return r.valor + r.id;
}

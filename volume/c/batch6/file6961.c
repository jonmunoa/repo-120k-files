// fichero 6961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6961;

Registro6961 crear_registro6961(int id) {
    Registro6961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6961(Registro6961 r) {
    return r.valor + r.id;
}

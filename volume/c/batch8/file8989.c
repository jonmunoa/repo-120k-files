// fichero 8989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8989;

Registro8989 crear_registro8989(int id) {
    Registro8989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8989(Registro8989 r) {
    return r.valor + r.id;
}

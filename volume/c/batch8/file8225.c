// fichero 8225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8225;

Registro8225 crear_registro8225(int id) {
    Registro8225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8225(Registro8225 r) {
    return r.valor + r.id;
}

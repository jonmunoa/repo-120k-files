// fichero 8721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8721;

Registro8721 crear_registro8721(int id) {
    Registro8721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8721(Registro8721 r) {
    return r.valor + r.id;
}

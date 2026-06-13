// fichero 721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro721;

Registro721 crear_registro721(int id) {
    Registro721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro721(Registro721 r) {
    return r.valor + r.id;
}

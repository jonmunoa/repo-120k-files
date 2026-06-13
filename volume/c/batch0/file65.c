// fichero 65 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro65;

Registro65 crear_registro65(int id) {
    Registro65 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro65(Registro65 r) {
    return r.valor + r.id;
}

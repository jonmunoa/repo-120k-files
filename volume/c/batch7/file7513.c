// fichero 7513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7513;

Registro7513 crear_registro7513(int id) {
    Registro7513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7513(Registro7513 r) {
    return r.valor + r.id;
}

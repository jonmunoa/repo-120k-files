// fichero 45849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45849;

Registro45849 crear_registro45849(int id) {
    Registro45849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45849(Registro45849 r) {
    return r.valor + r.id;
}

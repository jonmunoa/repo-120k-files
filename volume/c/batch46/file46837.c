// fichero 46837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46837;

Registro46837 crear_registro46837(int id) {
    Registro46837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46837(Registro46837 r) {
    return r.valor + r.id;
}

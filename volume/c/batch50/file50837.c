// fichero 50837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50837;

Registro50837 crear_registro50837(int id) {
    Registro50837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50837(Registro50837 r) {
    return r.valor + r.id;
}

// fichero 50137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50137;

Registro50137 crear_registro50137(int id) {
    Registro50137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50137(Registro50137 r) {
    return r.valor + r.id;
}

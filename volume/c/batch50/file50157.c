// fichero 50157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50157;

Registro50157 crear_registro50157(int id) {
    Registro50157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50157(Registro50157 r) {
    return r.valor + r.id;
}

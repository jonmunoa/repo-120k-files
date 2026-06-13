// fichero 50553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50553;

Registro50553 crear_registro50553(int id) {
    Registro50553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50553(Registro50553 r) {
    return r.valor + r.id;
}

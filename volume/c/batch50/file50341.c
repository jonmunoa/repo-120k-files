// fichero 50341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50341;

Registro50341 crear_registro50341(int id) {
    Registro50341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50341(Registro50341 r) {
    return r.valor + r.id;
}

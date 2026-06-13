// fichero 50913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50913;

Registro50913 crear_registro50913(int id) {
    Registro50913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50913(Registro50913 r) {
    return r.valor + r.id;
}

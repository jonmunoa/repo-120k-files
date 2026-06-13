// fichero 20497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20497;

Registro20497 crear_registro20497(int id) {
    Registro20497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20497(Registro20497 r) {
    return r.valor + r.id;
}

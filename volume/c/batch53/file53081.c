// fichero 53081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53081;

Registro53081 crear_registro53081(int id) {
    Registro53081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53081(Registro53081 r) {
    return r.valor + r.id;
}

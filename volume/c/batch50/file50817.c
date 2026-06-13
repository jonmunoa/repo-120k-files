// fichero 50817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50817;

Registro50817 crear_registro50817(int id) {
    Registro50817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50817(Registro50817 r) {
    return r.valor + r.id;
}

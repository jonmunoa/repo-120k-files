// fichero 50881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50881;

Registro50881 crear_registro50881(int id) {
    Registro50881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50881(Registro50881 r) {
    return r.valor + r.id;
}

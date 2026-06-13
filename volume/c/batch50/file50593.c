// fichero 50593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50593;

Registro50593 crear_registro50593(int id) {
    Registro50593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50593(Registro50593 r) {
    return r.valor + r.id;
}

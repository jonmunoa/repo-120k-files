// fichero 19081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19081;

Registro19081 crear_registro19081(int id) {
    Registro19081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19081(Registro19081 r) {
    return r.valor + r.id;
}

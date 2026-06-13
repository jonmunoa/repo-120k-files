// fichero 19257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19257;

Registro19257 crear_registro19257(int id) {
    Registro19257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19257(Registro19257 r) {
    return r.valor + r.id;
}

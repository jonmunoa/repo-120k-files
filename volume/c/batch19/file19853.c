// fichero 19853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19853;

Registro19853 crear_registro19853(int id) {
    Registro19853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19853(Registro19853 r) {
    return r.valor + r.id;
}

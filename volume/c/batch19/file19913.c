// fichero 19913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19913;

Registro19913 crear_registro19913(int id) {
    Registro19913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19913(Registro19913 r) {
    return r.valor + r.id;
}

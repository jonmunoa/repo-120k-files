// fichero 19929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19929;

Registro19929 crear_registro19929(int id) {
    Registro19929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19929(Registro19929 r) {
    return r.valor + r.id;
}

// fichero 17909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17909;

Registro17909 crear_registro17909(int id) {
    Registro17909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17909(Registro17909 r) {
    return r.valor + r.id;
}

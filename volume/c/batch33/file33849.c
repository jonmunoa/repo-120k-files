// fichero 33849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33849;

Registro33849 crear_registro33849(int id) {
    Registro33849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33849(Registro33849 r) {
    return r.valor + r.id;
}

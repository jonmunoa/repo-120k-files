// fichero 44301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44301;

Registro44301 crear_registro44301(int id) {
    Registro44301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44301(Registro44301 r) {
    return r.valor + r.id;
}

// fichero 44105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44105;

Registro44105 crear_registro44105(int id) {
    Registro44105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44105(Registro44105 r) {
    return r.valor + r.id;
}

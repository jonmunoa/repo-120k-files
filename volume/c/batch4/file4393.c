// fichero 4393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4393;

Registro4393 crear_registro4393(int id) {
    Registro4393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4393(Registro4393 r) {
    return r.valor + r.id;
}

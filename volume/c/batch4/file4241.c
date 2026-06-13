// fichero 4241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4241;

Registro4241 crear_registro4241(int id) {
    Registro4241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4241(Registro4241 r) {
    return r.valor + r.id;
}

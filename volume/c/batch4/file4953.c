// fichero 4953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4953;

Registro4953 crear_registro4953(int id) {
    Registro4953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4953(Registro4953 r) {
    return r.valor + r.id;
}

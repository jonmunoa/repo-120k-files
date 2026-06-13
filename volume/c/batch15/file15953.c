// fichero 15953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15953;

Registro15953 crear_registro15953(int id) {
    Registro15953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15953(Registro15953 r) {
    return r.valor + r.id;
}

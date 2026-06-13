// fichero 43629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43629;

Registro43629 crear_registro43629(int id) {
    Registro43629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43629(Registro43629 r) {
    return r.valor + r.id;
}

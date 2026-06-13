// fichero 43961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43961;

Registro43961 crear_registro43961(int id) {
    Registro43961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43961(Registro43961 r) {
    return r.valor + r.id;
}

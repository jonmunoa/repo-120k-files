// fichero 43161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43161;

Registro43161 crear_registro43161(int id) {
    Registro43161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43161(Registro43161 r) {
    return r.valor + r.id;
}

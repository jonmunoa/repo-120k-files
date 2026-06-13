// fichero 33917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33917;

Registro33917 crear_registro33917(int id) {
    Registro33917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33917(Registro33917 r) {
    return r.valor + r.id;
}

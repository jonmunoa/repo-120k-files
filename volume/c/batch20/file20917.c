// fichero 20917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20917;

Registro20917 crear_registro20917(int id) {
    Registro20917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20917(Registro20917 r) {
    return r.valor + r.id;
}

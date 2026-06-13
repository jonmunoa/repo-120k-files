// fichero 29161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29161;

Registro29161 crear_registro29161(int id) {
    Registro29161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29161(Registro29161 r) {
    return r.valor + r.id;
}

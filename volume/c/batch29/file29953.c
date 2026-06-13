// fichero 29953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29953;

Registro29953 crear_registro29953(int id) {
    Registro29953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29953(Registro29953 r) {
    return r.valor + r.id;
}

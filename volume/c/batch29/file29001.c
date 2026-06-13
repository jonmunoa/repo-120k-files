// fichero 29001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29001;

Registro29001 crear_registro29001(int id) {
    Registro29001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29001(Registro29001 r) {
    return r.valor + r.id;
}

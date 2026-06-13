// fichero 29821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29821;

Registro29821 crear_registro29821(int id) {
    Registro29821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29821(Registro29821 r) {
    return r.valor + r.id;
}

// fichero 29889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29889;

Registro29889 crear_registro29889(int id) {
    Registro29889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29889(Registro29889 r) {
    return r.valor + r.id;
}

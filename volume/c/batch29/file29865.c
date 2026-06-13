// fichero 29865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29865;

Registro29865 crear_registro29865(int id) {
    Registro29865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29865(Registro29865 r) {
    return r.valor + r.id;
}

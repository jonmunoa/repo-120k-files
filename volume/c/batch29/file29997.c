// fichero 29997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29997;

Registro29997 crear_registro29997(int id) {
    Registro29997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29997(Registro29997 r) {
    return r.valor + r.id;
}

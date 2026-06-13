// fichero 29137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29137;

Registro29137 crear_registro29137(int id) {
    Registro29137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29137(Registro29137 r) {
    return r.valor + r.id;
}

// fichero 29993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29993;

Registro29993 crear_registro29993(int id) {
    Registro29993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29993(Registro29993 r) {
    return r.valor + r.id;
}

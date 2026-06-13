// fichero 29917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29917;

Registro29917 crear_registro29917(int id) {
    Registro29917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29917(Registro29917 r) {
    return r.valor + r.id;
}

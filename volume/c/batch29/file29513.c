// fichero 29513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29513;

Registro29513 crear_registro29513(int id) {
    Registro29513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29513(Registro29513 r) {
    return r.valor + r.id;
}

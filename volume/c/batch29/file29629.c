// fichero 29629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29629;

Registro29629 crear_registro29629(int id) {
    Registro29629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29629(Registro29629 r) {
    return r.valor + r.id;
}

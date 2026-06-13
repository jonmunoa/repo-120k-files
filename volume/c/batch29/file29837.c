// fichero 29837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29837;

Registro29837 crear_registro29837(int id) {
    Registro29837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29837(Registro29837 r) {
    return r.valor + r.id;
}

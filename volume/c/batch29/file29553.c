// fichero 29553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29553;

Registro29553 crear_registro29553(int id) {
    Registro29553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29553(Registro29553 r) {
    return r.valor + r.id;
}

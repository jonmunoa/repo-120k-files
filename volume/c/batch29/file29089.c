// fichero 29089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29089;

Registro29089 crear_registro29089(int id) {
    Registro29089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29089(Registro29089 r) {
    return r.valor + r.id;
}

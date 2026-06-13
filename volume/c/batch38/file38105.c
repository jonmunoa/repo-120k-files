// fichero 38105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38105;

Registro38105 crear_registro38105(int id) {
    Registro38105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38105(Registro38105 r) {
    return r.valor + r.id;
}

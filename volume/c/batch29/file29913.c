// fichero 29913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29913;

Registro29913 crear_registro29913(int id) {
    Registro29913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29913(Registro29913 r) {
    return r.valor + r.id;
}

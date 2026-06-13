// fichero 14753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14753;

Registro14753 crear_registro14753(int id) {
    Registro14753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14753(Registro14753 r) {
    return r.valor + r.id;
}

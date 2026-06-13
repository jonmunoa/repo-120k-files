// fichero 45753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45753;

Registro45753 crear_registro45753(int id) {
    Registro45753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45753(Registro45753 r) {
    return r.valor + r.id;
}

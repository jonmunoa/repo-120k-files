// fichero 43753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43753;

Registro43753 crear_registro43753(int id) {
    Registro43753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43753(Registro43753 r) {
    return r.valor + r.id;
}

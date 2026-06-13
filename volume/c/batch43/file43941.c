// fichero 43941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43941;

Registro43941 crear_registro43941(int id) {
    Registro43941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43941(Registro43941 r) {
    return r.valor + r.id;
}

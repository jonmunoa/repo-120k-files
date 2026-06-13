// fichero 43293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43293;

Registro43293 crear_registro43293(int id) {
    Registro43293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43293(Registro43293 r) {
    return r.valor + r.id;
}

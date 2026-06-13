// fichero 39729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39729;

Registro39729 crear_registro39729(int id) {
    Registro39729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39729(Registro39729 r) {
    return r.valor + r.id;
}

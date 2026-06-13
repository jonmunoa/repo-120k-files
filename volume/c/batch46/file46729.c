// fichero 46729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46729;

Registro46729 crear_registro46729(int id) {
    Registro46729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46729(Registro46729 r) {
    return r.valor + r.id;
}

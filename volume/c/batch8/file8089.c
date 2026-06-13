// fichero 8089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8089;

Registro8089 crear_registro8089(int id) {
    Registro8089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8089(Registro8089 r) {
    return r.valor + r.id;
}

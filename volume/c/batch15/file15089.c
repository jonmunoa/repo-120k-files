// fichero 15089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15089;

Registro15089 crear_registro15089(int id) {
    Registro15089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15089(Registro15089 r) {
    return r.valor + r.id;
}

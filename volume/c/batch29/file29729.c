// fichero 29729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29729;

Registro29729 crear_registro29729(int id) {
    Registro29729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29729(Registro29729 r) {
    return r.valor + r.id;
}

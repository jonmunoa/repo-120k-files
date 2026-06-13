// fichero 24677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24677;

Registro24677 crear_registro24677(int id) {
    Registro24677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24677(Registro24677 r) {
    return r.valor + r.id;
}

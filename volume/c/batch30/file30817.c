// fichero 30817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30817;

Registro30817 crear_registro30817(int id) {
    Registro30817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30817(Registro30817 r) {
    return r.valor + r.id;
}

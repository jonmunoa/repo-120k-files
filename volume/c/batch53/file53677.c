// fichero 53677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53677;

Registro53677 crear_registro53677(int id) {
    Registro53677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53677(Registro53677 r) {
    return r.valor + r.id;
}

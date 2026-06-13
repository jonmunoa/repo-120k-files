// fichero 38817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38817;

Registro38817 crear_registro38817(int id) {
    Registro38817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38817(Registro38817 r) {
    return r.valor + r.id;
}

// fichero 24377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24377;

Registro24377 crear_registro24377(int id) {
    Registro24377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24377(Registro24377 r) {
    return r.valor + r.id;
}

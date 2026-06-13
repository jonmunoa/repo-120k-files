// fichero 24329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24329;

Registro24329 crear_registro24329(int id) {
    Registro24329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24329(Registro24329 r) {
    return r.valor + r.id;
}

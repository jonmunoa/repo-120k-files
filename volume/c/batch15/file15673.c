// fichero 15673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15673;

Registro15673 crear_registro15673(int id) {
    Registro15673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15673(Registro15673 r) {
    return r.valor + r.id;
}

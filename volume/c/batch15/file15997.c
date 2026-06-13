// fichero 15997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15997;

Registro15997 crear_registro15997(int id) {
    Registro15997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15997(Registro15997 r) {
    return r.valor + r.id;
}

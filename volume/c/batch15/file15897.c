// fichero 15897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15897;

Registro15897 crear_registro15897(int id) {
    Registro15897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15897(Registro15897 r) {
    return r.valor + r.id;
}

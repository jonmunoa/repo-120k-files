// fichero 6309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6309;

Registro6309 crear_registro6309(int id) {
    Registro6309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6309(Registro6309 r) {
    return r.valor + r.id;
}

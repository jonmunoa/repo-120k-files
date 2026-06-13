// fichero 44357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44357;

Registro44357 crear_registro44357(int id) {
    Registro44357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44357(Registro44357 r) {
    return r.valor + r.id;
}

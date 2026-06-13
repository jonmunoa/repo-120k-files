// fichero 44565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44565;

Registro44565 crear_registro44565(int id) {
    Registro44565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44565(Registro44565 r) {
    return r.valor + r.id;
}

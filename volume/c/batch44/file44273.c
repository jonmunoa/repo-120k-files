// fichero 44273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44273;

Registro44273 crear_registro44273(int id) {
    Registro44273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44273(Registro44273 r) {
    return r.valor + r.id;
}

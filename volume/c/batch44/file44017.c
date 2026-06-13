// fichero 44017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44017;

Registro44017 crear_registro44017(int id) {
    Registro44017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44017(Registro44017 r) {
    return r.valor + r.id;
}

// fichero 38329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38329;

Registro38329 crear_registro38329(int id) {
    Registro38329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38329(Registro38329 r) {
    return r.valor + r.id;
}

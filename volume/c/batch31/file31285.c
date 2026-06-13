// fichero 31285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31285;

Registro31285 crear_registro31285(int id) {
    Registro31285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31285(Registro31285 r) {
    return r.valor + r.id;
}

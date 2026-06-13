// fichero 14577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14577;

Registro14577 crear_registro14577(int id) {
    Registro14577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14577(Registro14577 r) {
    return r.valor + r.id;
}

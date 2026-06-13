// fichero 46085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46085;

Registro46085 crear_registro46085(int id) {
    Registro46085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46085(Registro46085 r) {
    return r.valor + r.id;
}

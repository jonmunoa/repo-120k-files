// fichero 49085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49085;

Registro49085 crear_registro49085(int id) {
    Registro49085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49085(Registro49085 r) {
    return r.valor + r.id;
}

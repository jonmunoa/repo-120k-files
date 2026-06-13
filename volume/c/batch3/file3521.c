// fichero 3521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3521;

Registro3521 crear_registro3521(int id) {
    Registro3521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3521(Registro3521 r) {
    return r.valor + r.id;
}

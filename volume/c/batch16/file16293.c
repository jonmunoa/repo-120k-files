// fichero 16293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16293;

Registro16293 crear_registro16293(int id) {
    Registro16293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16293(Registro16293 r) {
    return r.valor + r.id;
}

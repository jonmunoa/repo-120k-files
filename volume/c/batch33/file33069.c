// fichero 33069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33069;

Registro33069 crear_registro33069(int id) {
    Registro33069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33069(Registro33069 r) {
    return r.valor + r.id;
}

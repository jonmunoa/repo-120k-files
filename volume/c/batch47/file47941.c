// fichero 47941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47941;

Registro47941 crear_registro47941(int id) {
    Registro47941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47941(Registro47941 r) {
    return r.valor + r.id;
}

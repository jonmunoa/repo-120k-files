// fichero 14621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14621;

Registro14621 crear_registro14621(int id) {
    Registro14621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14621(Registro14621 r) {
    return r.valor + r.id;
}

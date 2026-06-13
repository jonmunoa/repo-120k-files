// fichero 40549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40549;

Registro40549 crear_registro40549(int id) {
    Registro40549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40549(Registro40549 r) {
    return r.valor + r.id;
}

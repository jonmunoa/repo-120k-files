// fichero 48621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48621;

Registro48621 crear_registro48621(int id) {
    Registro48621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48621(Registro48621 r) {
    return r.valor + r.id;
}

// fichero 32041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32041;

Registro32041 crear_registro32041(int id) {
    Registro32041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32041(Registro32041 r) {
    return r.valor + r.id;
}

// fichero 8525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8525;

Registro8525 crear_registro8525(int id) {
    Registro8525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8525(Registro8525 r) {
    return r.valor + r.id;
}

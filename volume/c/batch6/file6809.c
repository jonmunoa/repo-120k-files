// fichero 6809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6809;

Registro6809 crear_registro6809(int id) {
    Registro6809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6809(Registro6809 r) {
    return r.valor + r.id;
}

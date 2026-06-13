// fichero 21809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21809;

Registro21809 crear_registro21809(int id) {
    Registro21809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21809(Registro21809 r) {
    return r.valor + r.id;
}
